#ifndef INCLUDE_RASTERIZER_HPP
#define INCLUDE_RASTERIZER_HPP

class Vector2;
class Framebuffer;

class Rasterizer {
public:
	Rasterizer(int width, int height);
	~Rasterizer();

	void rasterizeTriangle(const Vector2& v1, const Vector2& v2, const Vector2& v3);
	inline Framebuffer* getFramebuffer() const { return fb; }
	
	void clearFrame() const;
	void presentFrame(int x, int y);
private:
	Framebuffer* fb;
	void initializeFramebuffer(int width, int height);
};
#endif
