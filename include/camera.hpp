#ifndef INCLUDE_CAMERA_HPP
#define INCLUDE_CAMERA_HPP

#include "vector3.hpp"
#include "matrix44.hpp"

class Camera {
public:
	Camera();
	~Camera();

	inline Vector3& getPosition() { return position; }
	inline Vector3& getRotation() { return rotation; }

	inline Matrix44 getPVMatrix() { return projMatrix * viewMatrix; }

	inline void calculateViewMatrix() {
		viewMatrix.setIdentity();
		viewMatrix.rotate(Vector3(1, 0, 0), rotation.x);
		viewMatrix.rotate(Vector3(0, 1, 0), rotation.y);
		viewMatrix.rotate(Vector3(0, 0, 1), rotation.z);
		viewMatrix.translate(position);
	}

	void createProjection(float fov, float aspectRatio, float nearPlane, float farPlane);
private:
	float fov, aspectRatio, zNear, zFar;
	Vector3 position;
	Vector3 rotation;
	
	Matrix44 viewMatrix;
	Matrix44 projMatrix;
};


#endif
