#include <ncurses.h>

#include "../include/rasterizer.hpp"
#include "../include/matrix44.hpp"
#include "../include/vector4.hpp"
#include "../include/vector3.hpp"
#include "../include/vector2.hpp"
#include "../include/camera.hpp"

#include "../include/defs.hpp"

float angle = 0;
Rasterizer* rasterizer = nullptr;
Camera* camera = nullptr;

Vector4 v1 = Vector4(-1, 1, 0, 1);
Vector4 v2 = Vector4(1, 1, 0, 1);
Vector4 v3 = Vector4(0, -1, 0, 1);

Vector4 transformVertex(const Vector4& vertex, const Matrix44& MVPMatrix) {
	Vector4 f;

	f = MVPMatrix * vertex;
	f.x /= f.w;
	f.y /= f.w;
	f.z /= f.w;

	return f;
}

bool renderCb() {
	Matrix44 transformation;
	Matrix44 PVMatrix;
	Matrix44 finalMatrix;

	camera->calculateViewMatrix();
	PVMatrix = camera->getPVMatrix();

	angle += 0.002f;

	transformation.translate(Vector3(0, 0, -2));
	transformation.rotate(Vector3(0, 1, 0), angle);
	finalMatrix = PVMatrix * transformation;

	Vector4 fv1 = transformVertex(v1, finalMatrix);
	Vector4 fv2 = transformVertex(v2, finalMatrix);
	Vector4 fv3 = transformVertex(v3, finalMatrix);

	rasterizer->clearFrame();	
	rasterizer->rasterizeTriangle(Vector2(fv1.x, fv1.y), Vector2(fv2.x, fv2.y), Vector2(fv3.x, fv3.y));

	return true;
}


int main(int argc, char** argv) {
	initscr();
	noecho();
	refresh();
	curs_set(0);
	cbreak();

	rasterizer = new Rasterizer(WW, WH);
	camera = new Camera();

	camera->createProjection(1.6f, (WW / (float) 2) / WH, .2f, 400);
	rasterizer->setRenderCb(renderCb);

	while (true) {
		rasterizer->presentFrame();
		rasterizer->swapFramebuffers();

		refresh();
		erase();
	}
	
	getch();
	clear();
	refresh();

	endwin();

	return 0;
}
