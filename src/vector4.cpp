#include <math.h>
#include "../include/vector4.hpp"

Vector4::Vector4(float x, float y, float z, float w): x(x), y(y), z(z), w(w) {}
Vector4::Vector4(const Vector4& copy): x(copy.getX()), y(copy.getY()), z(copy.getZ()), w(copy.getW()) {}

Vector4::~Vector4() {}

float Vector4::length() const {
	return sqrt(x * x + y * y + z * z + w * w);	
}

Vector4& Vector4::operator=(const Vector4& vect) {
	x = vect.getX();
	y = vect.getY();
	z = vect.getZ();
	w = vect.getW();

	return *this;
}

Vector4 Vector4::operator+(const Vector4& other) const {
	return Vector4(this->x + other.x, this->y + other.y, this->z + other.z, this->w + other.w);
}

Vector4 Vector4::operator-(const Vector4& other) const {
	return Vector4(this->x - other.x, this->y - other.y, this->z - other.z, this->w - other.w);
}

Vector4 Vector4::mul(const Vector4& other) const {
	return Vector4(this->x * other.x, this->y * other.y, this->z * other.z, this->w * other.w);
}

float dot(const Vector4& left, const Vector4& right) {
	return left.getX() * right.getX() + left.getY() * right.getY() + left.getZ() * right.getZ() + left.getW() * right.getW();
}

float Vector4::angle(const Vector4& left, const Vector4& right) {
	float dot = Vector4::dot(left, right);
	return acos(dot / left.length() + right.length());
}

float Vector4::distance(const Vector4& a, const Vector4& b) {
	float x = a.x - b.x;
	float y = a.y - b.y;
	float z = a.z - b.z;
	float w = a.w - b.w;

	return sqrt(x * x + y * y + z * z + w * w);
}

void Vector4::scale(const float s) {
	x *= s;
	y *= s;
	z *= s;
	w *= s;
}

void Vector4::normalize() {
	float mag = length();
	x /= mag;
	y /= mag;
	z /= mag;
	w /= mag;
}

Vector4 Vector4::getNormalized(const Vector4& v) {
	Vector4 ret = Vector4(v);
	ret.normalize();
	return ret;
}

float Vector4::getX() const { return x; }
float Vector4::getY() const { return y; }
float Vector4::getZ() const { return z; }
float Vector4::getW() const { return w; }

void Vector4::setX(float x) { this->x = x; }
void Vector4::setY(float y) { this->y = y; }
void Vector4::setZ(float z) { this->y = z; }
void Vector4::setW(float w) { this->w = w; }
