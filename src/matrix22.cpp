#include "../include/vector2.hpp"
#include "../include/matrix22.hpp"

Matrix22::Matrix22(float m00, float m01, float m10, float m11): m00(m00), m01(m01), m10(m10), m11(m11) {}

Matrix22::Matrix22(const Matrix22& m): m00(m.m00), m01(m.m01), m10(m.m10), m11(m.m11) {}

Matrix22& Matrix22::operator=(const Matrix22& matrix) {
	m00 = matrix.m00;
	m01 = matrix.m01;
	m10 = matrix.m10;
	m11 = matrix.m11;

	return *this;
}

Matrix22 Matrix22::operator+(const Matrix22& other) const {
	float m00, m01, m10, m11;
	m00 = this->m00 + other.m00;
	m01 = this->m01 + other.m01;
	m10 = this->m10 + other.m10;
	m11 = this->m11 + other.m11;

	return Matrix22(m00, m01, m10, m11);
}

Matrix22 Matrix22::operator-(const Matrix22& other) const {
	float m00, m01, m10, m11;
	m00 = this->m00 - other.m00;
	m01 = this->m01 - other.m01;
	m10 = this->m10 - other.m10;
	m11 = this->m11 - other.m11;

	return Matrix22(m00, m01, m10, m11);
}

Matrix22 Matrix22::mul(const Matrix22& other) const {
	float m00 = this->m00 * other.m00 + this->m10 * other.m01;
	float m01 = this->m01 * other.m00 + this->m11 * other.m01;
	float m10 = this->m00 * other.m10 + this->m10 * other.m11;
	float m11 = this->m01 * other.m10 + this->m11 * other.m11;

	return Matrix22(m00, m01, m10, m11);
}

Vector2 Matrix22::trans(Matrix22& matrix, Vector2 vector) {
	float x = this->m00 * vector.getX() + this->m10 * vector.getY();
	float y = this->m01 * vector.getX() + this->m11 * vector.getY();

	return Vector2(x, y);
}

Matrix22& Matrix22::transpose() {
	float temp = m01;
	m01 = m10;
	m10 = temp;

	return *this;
}

Matrix22& Matrix22::setIdentity() {
	m00 = 1;
	m11 = 1;
	m01 = 0;
	m10 = 0;

	return *this;
}

Matrix22& Matrix22::setZero() {
	m00 = 0;
	m10 = 0;
	m01 = 0;
	m11 = 0;

	return *this;
}

float Matrix22::det() {
	return (m00 * m11) - (m10 * m01);
}

Matrix22& Matrix22::invert() {
	float determinant = det();

	if (determinant != 0) {
		float determinant_inverse = 1 / (float) determinant;
		float t00 = m11 * determinant_inverse;
		float t01 = -m01 *determinant_inverse;
		float t10 = -m10 * determinant_inverse;
		float t11 = m00 * determinant_inverse;

		m00 = t00;
		m01 = t01;
		m10 = t10;
		m11 = t11;
	}

	return *this;
}

Matrix22& Matrix22::negate() {
	m00 = -m00;
	m01 = -m01;
	m10 = -m10;
	m11 = -m11;

	return *this;
}


