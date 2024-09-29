#include <math.h>
#include "../include/vector3.hpp"

Vector3::Vector3(float x, float y, float z): x(x), y(y), z(z) {}
Vector3::Vector3(const Vector3& copy): x(copy.getX()), y(copy.getY()), z(copy.getZ()) {}

Vector3::~Vector3() {}

float Vector3::length() const {
	return sqrt(x * x + y * y + z * z);	
}

Vector3& Vector3::operator=(const Vector3& vect) {
	x = vect.getX();
	y = vect.getY();
	z = vect.getZ();
	return *this;
}

Vector3 Vector3::operator+(const Vector3& other) const {
	return Vector3(this->x + other.x, this->y + other.y, this->z + other.z);
}

Vector3 Vector3::operator-(const Vector3& other) const {
	return Vector3(this->x - other.x, this->y - other.y, this->z - other.z);
}

Vector3 Vector3::mul(const Vector3& other) const {
	return Vector3(this->x * other.x, this->y * other.y, this->z * other.z);
}


Vector3 Vector3::lerp(const Vector3& a, const Vector3& b, float t) const {
	float x = a.x + ((b.x - a.x) * t);
	float y = a.y + ((b.y - a.y) * t);
	float z = a.z + ((b.z - a.z) * t);

	return Vector3(x, y, z);
}

float Vector3::dot(const Vector3& left, const Vector3& right) {
	return left.x * right.x + left.y * right.y + left.z * right.z;
}

Vector3 Vector3::cross(const Vector3& left, const Vector3& right) {
	float x = (left.y * right.z) - (left.z * right.y);
	float y = (left.z * right.x) - (left.x * right.z);
	float z = (left.x * right.y) - (left.y * right.x);

	return Vector3(x, y, z);
}

float Vector3::angle(const Vector3& left, const Vector3& right) {
	float dot = Vector3::dot(left, right);
	return acos(dot / left.length() + right.length());
}

float Vector3::distance(const Vector3& a, const Vector3& b) {
	float x = a.x - b.x;
	float y = a.y - b.y;
	float z = a.z - b.z;

	return sqrt(x * x + y * y + z * z);
}

void Vector3::scale(const float s) {
	x *= s;
	y *= s;
	z *= s;
}

void Vector3::normalize() {
	float mag = length();
	x /= mag;
	y /= mag;
	z /= mag;
}

Vector3 Vector3::getNormalized(const Vector3& v) {
	Vector3 ret = Vector3(v);
	ret.normalize();
	return ret;
}

float Vector3::getX() const { return x; }
float Vector3::getY() const { return y; }
float Vector3::getZ() const { return z; }

void Vector3::setX(float x) { this->x = x; }
void Vector3::setY(float y) { this->y = y; }
void Vector3::setZ(float z) { this->z = z; }
