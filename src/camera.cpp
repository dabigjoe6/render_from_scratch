#include <math.h>
#include "../include/camera.hpp"


Camera::Camera(): 
	fov(0),
	aspectRatio(0),
	zNear(0),
	zFar(0),
	position(0, 0, 0),
	rotation(0, 0, 0),
	viewMatrix(),
	projMatrix()	
{

}

Camera::~Camera() {}

void Camera::createProjection(float fov, float aspectRatio, float zNear, float zFar) {
	projMatrix.setIdentity();
	float tanhfov = (float)tanf(fov / 2);

	projMatrix.m00 = 1/(aspectRatio * tanhfov);
	projMatrix.m11 = 1/tanhfov;
	projMatrix.m22 = -(zNear + zFar) / (zFar - zNear);
	projMatrix.m23 = -1;
	projMatrix.m32 = -(2 * zFar * zNear) / (zFar - zNear);
}
