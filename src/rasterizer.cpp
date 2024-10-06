#include "../include/rasterizer.hpp"
#include "../include/vector2.hpp"
#include "../include/vector3.hpp"
#include "../include/defs.hpp"
#include "../include/framebuffer.hpp"

#include <math.h>
#include <ncurses.h>

static Vector3 getBarryCentricCoordinates(int ptx, int pty, const Vector2& v1, const Vector2& v2, const Vector2& v3) {
	Vector3 ret;

	ret.x = ((v2.y - v3.y) * (ptx - v3.x) + (v3.x - v2.x) * (pty - v3.y)) / ((v2.y - v3.y) * (v1.x - v3.x) + (v3.x - v2.x) * (v1.y - v3.y));

	ret.y = ((v3.y - v1.y) * (ptx - v3.x) + (v1.x - v3.x) * (pty - v3.y)) /	((v2.y - v3.y) * (v1.x - v3.x) + (v3.x - v2.x) * (v1.y - v3.y));

	ret.z = 1.0f - ret.x - ret.y;

	return ret;
}

inline static bool isPointInTriangle(Vector3& barryCentric) {
	int one = (barryCentric.x < -0.001);
	int two = (barryCentric.y < -0.001);
	int three = (barryCentric.z < -0.001);

	return ((one == two) && (two == three));
}

void Rasterizer::initializeFramebuffer(int width, int height) {
	fb = new Framebuffer(width, height);
}

Rasterizer::Rasterizer(int width, int height): fb(nullptr) {
	initializeFramebuffer(width, height);
}

Rasterizer::~Rasterizer() {
	delete fb;
}

void Rasterizer::rasterizeTriangle(const Vector2& v1, const Vector2& v2, const Vector2& v3) {
	int minx, maxx;
	int miny, maxy;
	
	minx = MAX(0, MIN(v1.x, MIN(v2.x, v3.x)));
	miny = MAX(0, MIN(v1.y, MIN(v2.y, v3.y)));

	maxx = MIN(fb->getWidth(), ceil(MAX(v1.x, MAX(v2.x, v3.x)) + 1));
	maxy = MIN(fb->getHeight(), ceil(MAX(v1.y, MAX(v2.y, v3.y)) + 1));

	for (int j = miny; j < maxy; ++j) {
		for (int i = minx; i < maxx; ++i) {
			Vector3 barryCentric = getBarryCentricCoordinates(i, j, v1, v2, v3);
			if (isPointInTriangle(barryCentric)) {
				fb->setPixel(i, j, '#', 0);
			} else {
				fb->setPixel(i, j, '.', 0);
			}
		}
	}
}

void Rasterizer::clearFrame() const {
	fb->clear(0);
}

void Rasterizer::presentFrame(int x, int y) {
	fb->print(x, y);
}
