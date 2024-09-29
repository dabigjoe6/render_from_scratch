#include "../include/vector3.hpp"
#include "../include/matrix33.hpp"

Matrix33::Matrix33(
	float m00, float m01, float m02, 
	float m10, float m11, float m12,
	float m20, float m21, float m22
):	
	m00(m00), m01(m01), m02(m02), 
	m10(m10), m11(m11), m12(m12),
	m20(m20), m21(m21), m22(m22)
{}

Matrix33::Matrix33(const Matrix33& m): 
	m00(m.m00), m01(m.m01), m02(m.m02),
	m10(m.m10), m11(m.m11), m12(m.m12),
	m20(m.m20), m21(m.m21), m22(m.m22)
{}

Matrix33& Matrix33::operator=(const Matrix33& matrix) {
	m00 = matrix.m00;
	m01 = matrix.m01;
	m02 = matrix.m02;
	m10 = matrix.m10;
	m11 = matrix.m11;
	m12 = matrix.m12;
	m20 = matrix.m20;
	m21 = matrix.m21;
	m22 = matrix.m22;

	return *this;
}

Matrix33 Matrix33::operator+(const Matrix33& matrix) const {
	float m00, m01, m02;
	float m10, m11, m12;
	float m20, m21, m22;

	m00 = this->m00 + matrix.m00;
	m01 = this->m01 + matrix.m01;
	m02 = this->m02 + matrix.m02;
	m10 = this->m10 + matrix.m10;
	m11 = this->m11 + matrix.m11;
	m12 = this->m12 + matrix.m12;
	m20 = this->m20 + matrix.m20;
	m21 = this->m21 + matrix.m21;
	m22 = this->m22 + matrix.m22;

	return Matrix33(
		m00, m01, m02,
		m10, m11, m12,
		m20, m21, m22
	);
}

Matrix33 Matrix33::operator-(const Matrix33& matrix) const {
	float m00, m01, m02;
	float m10, m11, m12;
	float m20, m21, m22;

	m00 = this->m00 - matrix.m00;
	m01 = this->m01 - matrix.m01;
	m02 = this->m02 - matrix.m02;
	m10 = this->m10 - matrix.m10;
	m11 = this->m11 - matrix.m11;
	m12 = this->m12 - matrix.m12;
	m20 = this->m20 - matrix.m20;
	m21 = this->m21 - matrix.m21;
	m22 = this->m22 - matrix.m22;

	return Matrix33(
		m00, m01, m02,
		m10, m11, m12,
		m20, m21, m22
	);
}

Matrix33 Matrix33::mul(const Matrix33& other) const {
	float m00 = this->m00 * other.m00 + this->m10 * other.m01 + this->m20 * other.m02;
	float m01 = this->m01 * other.m00 + this->m11 * other.m01 + this->m21 * other.m02;
	float m02 = this->m02 * other.m00 + this->m12 * other.m01 + this->m22 * other.m02;

	float m10 = this->m00 * other.m10 + this->m10 * other.m11 + this->m20 * other.m12;
	float m11 = this->m01 * other.m10 + this->m11 * other.m11 + this->m21 * other.m12;
	float m12 = this->m02 * other.m10 + this->m12 * other.m11 + this->m22 * other.m12;

	float m20 = this->m00 * other.m20 + this->m10 * other.m21 + this->m20 * other.m22;
	float m21 = this->m01 * other.m20 + this->m11 * other.m21 + this->m21 * other.m22;
	float m22 = this->m02 * other.m20 + this->m12 * other.m21 + this->m22 * other.m22;

	return Matrix33(
		m00, m01, m02,
		m10, m11, m12,
		m20, m21, m22
	);
}

Vector3 Matrix33::trans(Matrix33& matrix, Vector3 vector) {
	float x = this->m00 * vector.getX() + this->m10 * vector.getY() + this->m20 * vector.getZ();
	float y = this->m01 * vector.getX() + this->m11 * vector.getY() + this->m21 * vector.getZ();
	float z = this->m02 * vector.getX() + this->m12 * vector.getY() + this->m22 * vector.getZ();

	return Vector3(x, y, z);
}

Matrix33& Matrix33::transpose() {
	float m00 = this->m00;
	float m01 = this->m10;
	float m02 = this->m20;
	float m10 = this->m01;
	float m11 = this->m11;
	float m12 = this->m12;
	float m20 = this->m02;
	float m21 = this->m12;
	float m22 = this->m22;

	this->m00 = m00;
	this->m01 = m01;
	this->m02 = m02;
	this->m10 = m10;
	this->m11 = m11;
	this->m12 = m12;
	this->m20 = m20;
	this->m21 = m21;
	this->m22 = m22;

	return *this;
}

Matrix33& Matrix33::setIdentity() {
	m00 = 1;
	m01 = 0;
	m02 = 0;

	m10 = 0;
	m11 = 1;
	m12 = 0;

	m20 = 0;
	m21 = 0;
	m22 = 1;

	return *this;
}

Matrix33& Matrix33::setZero() {
	m00 = 0;
	m01 = 0;
	m02 = 0;

	m10 = 0;
	m11 = 0;
	m12 = 0;

	m20 = 0;
	m21 = 0;
	m22 = 0;

	return *this;
}

float Matrix33::det() {
	return m00 * (m11 * m22 - m12 * m21) + 
	       m01 * (m12 * m20 - m10 * m22) +
	       m02 * (m10 * m21 - m11 * m20);
}

Matrix33& Matrix33::invert() {
	float determinant = det();

	if (determinant != 0) {

		float determinant_inv = 1 / (float) determinant;

		float t00 = this->m11 * this->m22 - this->m12* this->m21;
		float t01 = - this->m10 * this->m22 + this->m12 * this->m20;
		float t02 = this->m10 * this->m21 - this->m11 * this->m20;
		float t10 = - this->m01 * this->m22 + this->m02 * this->m21;
		float t11 = this->m00 * this->m22 - this->m02 * this->m20;
		float t12 = - this->m00 * this->m21 + this->m01 * this->m20;
		float t20 = this->m01 * this->m12 - this->m02 * this->m11;
		float t21 = -this->m00 * this->m12 + this->m02 * this->m10;
		float t22 = this->m00 * this->m11 - this->m01 * this->m10;

		this->m00 = t00*determinant_inv;
		this->m11 = t11*determinant_inv;
		this->m22 = t22*determinant_inv;
		this->m01 = t10*determinant_inv;
		this->m10 = t01*determinant_inv;
		this->m20 = t02*determinant_inv;
		this->m02 = t20*determinant_inv;
		this->m12 = t21*determinant_inv;
		this->m21 = t12*determinant_inv;
	}

	return *this;
}

Matrix33& Matrix33::negate() {
	this->m00 = -this->m00;
	this->m01 = -this->m02;
	this->m02 = -this->m01;
	this->m10 = -this->m10;
	this->m11 = -this->m12;
	this->m12 = -this->m11;
	this->m20 = -this->m20;
	this->m21 = -this->m22;
	this->m22 = -this->m21;

	return *this;
}
