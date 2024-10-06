#include "../include/framebuffer.hpp"
#include <memory.h>
#include <ncurses.h>

void Framebuffer::recreate(int width, int height) {
	this->width = width;
	this->height = height;

	colorbuffer = new colorbuffer_t[width * height];
	depthbuffer = new depthbuffer_t[width * height];
}

Framebuffer::Framebuffer(int width, int height): width(width), height(height) {
	recreate(width, height);
}

void Framebuffer::clear(int clearColor) {
	memset(colorbuffer, clearColor, sizeof(colorbuffer_t) * width * height);
	memset(depthbuffer, MAX_DEPTH_VALUE, sizeof(depthbuffer) * width * height);
}

void Framebuffer::setPixel(int x, int y, colorbuffer_t pixelcolor, depthbuffer_t depth) {
	int index = (y * width) + x;

	if (depth < depthbuffer[index]) {
		colorbuffer[index] = pixelcolor;
		depthbuffer[index] = depth;
	}
}

colorbuffer_t Framebuffer::getColor(int x, int y) {
	int index = (y * width) + x;
	return colorbuffer[index];
}

depthbuffer_t Framebuffer::getDepth(int x, int y) {
	int index = (y * width) + x;
	return depthbuffer[index];
}

void Framebuffer::print(int offsetx, int offsety) {
	for (int i = offsety; i < height; i++) {
		for (int j = offsetx; j < width; j++) {
			int index = (i * width) + j;
			
			if (!colorbuffer[index]) continue;

			mvprintw(i, j, "%c", (char) colorbuffer[index]);		
		}
	}
}

Framebuffer::~Framebuffer() {
	delete[] colorbuffer;
	delete[] depthbuffer;
}


