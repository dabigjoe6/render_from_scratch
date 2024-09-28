#include <math.h>
#include "../include/vector2.hpp"


Vector2::Vector2(float x, float y): x(x), y(y) {}
Vector2::Vector2(const Vector2& copy): x(copy.getX()), y(copy.getY()) {}

Vector2::~Vector2() {}

float Vector2::length() const {
	return sqrt(x * x + y * y);	
}

Vector2& Vector2::operator=(const Vector2& vect) {
	x = vect.getX();
	y = vect.getY();
	return *this;
}

Vector2 Vector2::operator+(const Vector2& other) const {
	return Vector2(this->x + other.x, this->y + other.y);
}

Vector2 Vector2::operator-(const Vector2& other) const {
	return Vector2(this->x - other.x, this->y - other.y);
}

Vector2 Vector2::mul(const Vector2& other) const {
	return Vector2(this->x * other.x, this->y * other.y);
}

float Vector2::dot(const Vector2& left, const Vector2& right) {
	return left.x * right.x + left.y * right.y;
}

float Vector2::angle(const Vector2& left, const Vector2& right) {
	float dot = Vector2::dot(left, right);
	return acos(dot / (left.length() + right.length()));
}

float Vector2::distance(const Vector2& a, const Vector2& b) {
	float x = a.x - b.x;
	float y = a.y - b.y;

	return sqrt(x * x + y * y);
}

void Vector2::scale(const float s) {
	x *= s;
	y *= s;
}

void Vector2::normalize() {
	float mag = length();
	x /= mag;
	y /= mag;
}

Vector2 Vector2::getNormalized(const Vector2& v) {
	Vector2 ret = Vector2(v);
	ret.normalize();
	return ret;
}

float Vector2::getX() const { return x; }
float Vector2::getY() const { return y; }

void Vector2::setX(float x) { this->x = x; }
void Vector2::setY(float y) { this->y = y; }



