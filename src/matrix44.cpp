#include <math.h>

#include "../include/vector3.hpp"
#include "../include/vector4.hpp"
#include "../include/matrix44.hpp"




#define DET33(t00, t01, t02, t10, t11, t12, t20, t21, t22) (((t00) * ((t11) * (t22) - (t12) * (t21))) + ((t01) * ((t12) * (t20) - (t10) * (t22))) + ((t02) * ((t10) * (t21) - (t11) * (t20))))

Matrix44::Matrix44(
	float m00, float m01, float m02, float m03,
	float m10, float m11, float m12, float m13,
	float m20, float m21, float m22, float m23,
	float m30, float m31, float m32, float m33
):	
	m00(m00), m01(m01), m02(m02), m03(m03),
	m10(m10), m11(m11), m12(m12), m13(m13),
	m20(m20), m21(m21), m22(m22), m23(m23),
	m30(m30), m31(m31), m32(m32), m33(m33)
{}

Matrix44::Matrix44(const Matrix44& m): 
	m00(m.m00), m01(m.m01), m02(m.m02), m03(m.m03),
	m10(m.m10), m11(m.m11), m12(m.m12), m13(m.m13),
	m20(m.m20), m21(m.m21), m22(m.m22), m23(m.m23),
	m30(m.m30), m31(m.m31), m32(m.m32), m33(m.m33)
{}

Matrix44& Matrix44::operator=(const Matrix44& m) {
	m00 = m.m00;
	m01 = m.m01;
	m02 = m.m02;
	m03 = m.m03;

	m10 = m.m10;
	m11 = m.m11;
	m12 = m.m12;
	m13 = m.m13;

	m20 = m.m20;
	m21 = m.m21;
	m22 = m.m22;
	m23 = m.m23;

	m30 = m.m30;
	m31 = m.m31;
	m32 = m.m32;
	m33 = m.m33;	

	return *this;
}

Matrix44 Matrix44::operator+(const Matrix44& m) const {
	float m00, m01, m02, m03;
	float m10, m11, m12, m13;
	float m20, m21, m22, m23;
	float m30, m31, m32, m33;

	m00 = this->m00 + m.m00;
	m01 = this->m01 + m.m01;
	m02 = this->m02 + m.m02;
	m03 = this->m03 + m.m03;

	m10 = this->m10 + m.m10;
	m11 = this->m11 + m.m11;
	m12 = this->m12 + m.m12;
	m13 = this->m13 + m.m13;

	m20 = this->m20 + m.m20;
	m21 = this->m21 + m.m21;
	m22 = this->m22 + m.m22;
	m23 = this->m23 + m.m23;

	m30 = this->m30 + m.m30;
	m31 = this->m31 + m.m31;
	m32 = this->m32 + m.m32;
	m33 = this->m33 + m.m33;	

	return Matrix44(
		m00, m01, m02, m03,
		m10, m11, m12, m13,
		m20, m21, m22, m23,
		m30, m31, m32, m33
	);
}

Matrix44 Matrix44::operator-(const Matrix44& m) const {
	float m00, m01, m02, m03;
	float m10, m11, m12, m13;
	float m20, m21, m22, m23;
	float m30, m31, m32, m33;

	m00 = this->m00 - m.m00;
	m01 = this->m01 - m.m01;
	m02 = this->m02 - m.m02;
	m03 = this->m03 - m.m03;

	m10 = this->m10 - m.m10;
	m11 = this->m11 - m.m11;
	m12 = this->m12 - m.m12;
	m13 = this->m13 - m.m13;

	m20 = this->m20 - m.m20;
	m21 = this->m21 - m.m21;
	m22 = this->m22 - m.m22;
	m23 = this->m23 - m.m23;

	m30 = this->m30 - m.m30;
	m31 = this->m31 - m.m31;
	m32 = this->m32 - m.m32;
	m33 = this->m33 - m.m33;	

	return Matrix44(
		m00, m01, m02, m03,
		m10, m11, m12, m13,
		m20, m21, m22, m23,
		m30, m31, m32, m33
	);
}

Matrix44 Matrix44::mul(const Matrix44& m) const {
	float m00 = this->m00 * m.m00 + this->m10 * m.m01 + this->m20 * m.m02 + this->m30 * m.m03;
	float m01 = this->m01 * m.m00 + this->m11 * m.m01 + this->m21 * m.m02 + this->m31 * m.m03;
	float m02 = this->m02 * m.m00 + this->m12 * m.m01 + this->m22 * m.m02 + this->m32 * m.m03;
	float m03 = this->m03 * m.m00 + this->m13 * m.m01 + this->m23 * m.m02 + this->m33 * m.m03;
	float m10 = this->m00 * m.m10 + this->m10 * m.m11 + this->m20 * m.m12 + this->m30 * m.m13;
	float m11 = this->m01 * m.m10 + this->m11 * m.m11 + this->m21 * m.m12 + this->m31 * m.m13;
	float m12 = this->m02 * m.m10 + this->m12 * m.m11 + this->m22 * m.m12 + this->m32 * m.m13;
	float m13 = this->m03 * m.m10 + this->m13 * m.m11 + this->m23 * m.m12 + this->m33 * m.m13;
	float m20 = this->m00 * m.m20 + this->m10 * m.m21 + this->m20 * m.m22 + this->m30 * m.m23;
	float m21 = this->m01 * m.m20 + this->m11 * m.m21 + this->m21 * m.m22 + this->m31 * m.m23;
	float m22 = this->m02 * m.m20 + this->m12 * m.m21 + this->m22 * m.m22 + this->m32 * m.m23;
	float m23 = this->m03 * m.m20 + this->m13 * m.m21 + this->m23 * m.m22 + this->m33 * m.m23;
	float m30 = this->m00 * m.m30 + this->m10 * m.m31 + this->m20 * m.m32 + this->m30 * m.m33;
	float m31 = this->m01 * m.m30 + this->m11 * m.m31 + this->m21 * m.m32 + this->m31 * m.m33;
	float m32 = this->m02 * m.m30 + this->m12 * m.m31 + this->m22 * m.m32 + this->m32 * m.m33;
	float m33 = this->m03 * m.m30 + this->m13 * m.m31 + this->m23 * m.m32 + this->m33 * m.m33;

	return Matrix44(
		m00, m01, m02, m03,
		m10, m11, m12, m13,
		m20, m21, m22, m23,
		m30, m31, m32, m33
	);
}

Vector4 Matrix44::trans(Matrix44& matrix, Vector4 vector) {
	float x = this->m00 * vector.getX() + this->m10 * vector.getY() + this->m20 * vector.getZ() + this->m30 * vector.getW();
	float y = this->m01 * vector.getX() + this->m11 * vector.getY() + this->m21 * vector.getZ() + this->m31 * vector.getW();
	float z = this->m02 * vector.getX() + this->m12 * vector.getY() + this->m22 * vector.getZ() + this->m32 * vector.getW();
	float w = this->m03 * vector.getX() + this->m13 * vector.getY() + this->m23 * vector.getZ() + this->m33 * vector.getW();

	return Vector4(x, y, z, w);
}

Matrix44& Matrix44::transpose() {
	float m00 = this->m00;
	float m01 = this->m10;
	float m02 = this->m20;
	float m03 = this->m30;
	float m10 = this->m01;
	float m11 = this->m11;
	float m12 = this->m21;
	float m13 = this->m31;
	float m20 = this->m02;
	float m21 = this->m12;
	float m22 = this->m22;
	float m23 = this->m32;
	float m30 = this->m03;
	float m31 = this->m13;
	float m32 = this->m23;
	float m33 = this->m33;

	this->m00 = m00;
	this->m01 = m01;
	this->m02 = m02;
	this->m03 = m03;
	this->m10 = m10;
	this->m11 = m11;
	this->m12 = m12;
	this->m13 = m13;
	this->m20 = m20;
	this->m21 = m21;
	this->m22 = m22;
	this->m23 = m23;
	this->m30 = m30;
	this->m31 = m31;
	this->m32 = m32;
	this->m33 = m33;	

	return *this;
}

Matrix44& Matrix44::setIdentity() {
	m00 = 1;
	m01 = 0;
	m02 = 0;
	m03 = 0;

	m10 = 0;
	m11 = 1;
	m12 = 0;
	m13 = 0;

	m20 = 0;
	m21 = 0;
	m22 = 1;
	m23 = 0;

	m30 = 0;
	m31 = 0;
	m32 = 0;
	m33 = 1;

	return *this;
}

Matrix44& Matrix44::setZero() {
	m00 = 0;
	m01 = 0;
	m02 = 0;
	m03 = 0;

	m10 = 0;
	m11 = 0;
	m12 = 0;
	m13 = 0;

	m20 = 0;
	m21 = 0;
	m22 = 0;
	m23 = 0;

	m30 = 0;
	m31 = 0;
	m32 = 0;
	m33 = 0;

	return *this;
}

float Matrix44::det() {
	float f = m00 * ((m11 * m22 * m33 + m12 * m23 * m31 + m13 * m21 * m32)
		    - m13 * m22 * m31
		    - m11 * m23 * m32
		    - m12 * m21 * m33);
	    f -= m01 * ((m10 * m22 * m33 + m12 * m23 * m30 + m13 * m20 * m32)
		    - m13 * m22 * m30
		    - m10 * m23 * m32
		    - m12 * m20 * m33);
	    f += m02 * ((m10 * m21 * m33 + m11 * m23 * m30 + m13 * m20 * m31)
		    - m13 * m21 * m30
		    - m10 * m23 * m31
		    - m11 * m20 * m33);
	    f -= m03 * ((m10 * m21 * m32 + m11 * m22 * m30 + m12 * m20 * m31)
		    - m12 * m21 * m30
		    - m10 * m22 * m31
		    - m11 * m20 * m32);
	return f;
}

Matrix44& Matrix44::invert() {
	float determinant = det();

	if (determinant != 0) {

		float determinant_inv = (float)1/determinant;

		float t00 =  DET33(m11, m12, m13, m21, m22, m23, m31, m32, m33);
		float t01 = -DET33(m10, m12, m13, m20, m22, m23, m30, m32, m33);
		float t02 =  DET33(m10, m11, m13, m20, m21, m23, m30, m31, m33);
		float t03 = -DET33(m10, m11, m12, m20, m21, m22, m30, m31, m32);

		float t10 = -DET33(m01, m02, m03, m21, m22, m23, m31, m32, m33);
		float t11 =  DET33(m00, m02, m03, m20, m22, m23, m30, m32, m33);
		float t12 = -DET33(m00, m01, m03, m20, m21, m23, m30, m31, m33);
		float t13 =  DET33(m00, m01, m02, m20, m21, m22, m30, m31, m32);

		float t20 =  DET33(m01, m02, m03, m11, m12, m13, m31, m32, m33);
		float t21 = -DET33(m00, m02, m03, m10, m12, m13, m30, m32, m33);
		float t22 =  DET33(m00, m01, m03, m10, m11, m13, m30, m31, m33);
		float t23 = -DET33(m00, m01, m02, m10, m11, m12, m30, m31, m32);

		float t30 = -DET33(m01, m02, m03, m11, m12, m13, m21, m22, m23);
		float t31 =  DET33(m00, m02, m03, m10, m12, m13, m20, m22, m23);
		float t32 = -DET33(m00, m01, m03, m10, m11, m13, m20, m21, m23);
		float t33 =  DET33(m00, m01, m02, m10, m11, m12, m20, m21, m22);

		m00 = t00*determinant_inv;
		m11 = t11*determinant_inv;
		m22 = t22*determinant_inv;
		m33 = t33*determinant_inv;
		m01 = t10*determinant_inv;
		m10 = t01*determinant_inv;
		m20 = t02*determinant_inv;
		m02 = t20*determinant_inv;
		m12 = t21*determinant_inv;
		m21 = t12*determinant_inv;
		m03 = t30*determinant_inv;
		m30 = t03*determinant_inv;
		m13 = t31*determinant_inv;
		m31 = t13*determinant_inv;
		m32 = t23*determinant_inv;
		m23 = t32*determinant_inv;	
	}

	return *this;
}

Matrix44& Matrix44::negate() {
	m00 = -m00;
	m01 = -m01;
	m02 = -m02;
	m03 = -m03;

	m10 = -m10;
	m11 = -m11;
	m12 = -m12;
	m13 = -m13;

	m20 = -m20;
	m21 = -m21;
	m22 = -m22;
	m23 = -m23;

	m30 = -m30;
	m31 = -m31;
	m32 = -m32;
	m33 = -m33;

	return *this;
}

Matrix44& Matrix44::scale(const Vector3& scale){
    this->m00 = this->m00 * scale.getX();
    this->m01 = this->m01 * scale.getX();
    this->m02 = this->m02 * scale.getX();
    this->m03 = this->m03 * scale.getX();
    this->m10 = this->m10 * scale.getY();
    this->m11 = this->m11 * scale.getY();
    this->m12 = this->m12 * scale.getY();
    this->m13 = this->m13 * scale.getY();
    this->m20 = this->m20 * scale.getZ();
    this->m21 = this->m21 * scale.getZ();
    this->m22 = this->m22 * scale.getZ();
    this->m23 = this->m23 * scale.getZ();

    return *this;
}

Matrix44& Matrix44::rotate(const Vector3& eulerAxis, float angle){
    float c = (float) cos(angle);
    float s = (float) sin(angle);
    float oneminusc = 1.0f - c;
    float xy = eulerAxis.getX() * eulerAxis.getY();
    float yz = eulerAxis.getY() * eulerAxis.getZ();
    float xz = eulerAxis.getX() * eulerAxis.getZ();
    float xs = eulerAxis.getX() * s;
    float ys = eulerAxis.getY() * s;
    float zs = eulerAxis.getZ() * s;

    float f00 = eulerAxis.getX() * eulerAxis.getX() * oneminusc + c;
    float f01 = xy * oneminusc + zs;
    float f02 = xz * oneminusc - ys;
    float f10 = xy * oneminusc - zs;
    float f11 = eulerAxis.getY() * eulerAxis.getY() * oneminusc+c;
    float f12 = yz * oneminusc + xs;
    float f20 = xz * oneminusc + ys;
    float f21 = yz * oneminusc - xs;
    float f22 = eulerAxis.getZ() * eulerAxis.getZ() * oneminusc+c;

    float t00 = this->m00 * f00 + this->m10 * f01 + this->m20 * f02;
    float t01 = this->m01 * f00 + this->m11 * f01 + this->m21 * f02;
    float t02 = this->m02 * f00 + this->m12 * f01 + this->m22 * f02;
    float t03 = this->m03 * f00 + this->m13 * f01 + this->m23 * f02;
    float t10 = this->m00 * f10 + this->m10 * f11 + this->m20 * f12;
    float t11 = this->m01 * f10 + this->m11 * f11 + this->m21 * f12;
    float t12 = this->m02 * f10 + this->m12 * f11 + this->m22 * f12;
    float t13 = this->m03 * f10 + this->m13 * f11 + this->m23 * f12;

    this->m20 = this->m00 * f20 + this->m10 * f21 + this->m20 * f22;
    this->m21 = this->m01 * f20 + this->m11 * f21 + this->m21 * f22;
    this->m22 = this->m02 * f20 + this->m12 * f21 + this->m22 * f22;
    this->m23 = this->m03 * f20 + this->m13 * f21 + this->m23 * f22;
    this->m00 = t00;
    this->m01 = t01;
    this->m02 = t02;
    this->m03 = t03;
    this->m10 = t10;
    this->m11 = t11;
    this->m12 = t12;
    this->m13 = t13;
    return *this;
}

Matrix44& Matrix44::translate(const Vector3& vec) {
    this->m30 += this->m00 * vec.getX() + this->m10 * vec.getY() + this->m20 * vec.getZ();
    this->m31 += this->m01 * vec.getX() + this->m11 * vec.getY() + this->m21 * vec.getZ();
    this->m32 += this->m02 * vec.getX() + this->m12 * vec.getY() + this->m22 * vec.getZ();
    this->m33 += this->m03 * vec.getX() + this->m13 * vec.getY() + this->m23 * vec.getZ();

    return *this;
}
