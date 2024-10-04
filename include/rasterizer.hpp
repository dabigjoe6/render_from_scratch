#ifndef INCLUDE_RASTERIZER_HPP
#define INCLUDE_RASTERIZER_HPP

class Vector2;

struct FrameBuffer {
	FrameBuffer(int width, int height): width(width), height(height) {}

	int width, height;
};

class Rasterizer {
public:
	Rasterizer(int width, int height);
	~Rasterizer();

	void rasterizeTriangle(const Vector2& v1, const Vector2& v2, const Vector2& v3);
	inline FrameBuffer* getFrameBuffer() const { return fb; }
private:
	FrameBuffer* fb;
	void initializeFrameBuffer(int width, int height);
};
#endif
