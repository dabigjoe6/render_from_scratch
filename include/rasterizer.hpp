#ifndef INCLUDE_RASTERIZER_HPP
#define INCLUDE_RASTERIZER_HPP

class Vector2;
class Framebuffer;

class Rasterizer {
public:
	Rasterizer(int width, int height);
	~Rasterizer();

	void rasterizeTriangle(const Vector2& v1, const Vector2& v2, const Vector2& v3);
	
	void clearFrame() const;
	void presentFrame();

	void swapFramebuffers();
private:
	Framebuffer* rFrame; // render frame
	Framebuffer* pFrame; // present frame
	Framebuffer* framebuffers[2];

	int currentFramebuffer;

	void initializeFramebuffer(int width, int height);
};
#endif
