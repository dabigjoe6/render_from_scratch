#ifndef INCLUDE_MATRIX44_HPP
#define INCLUDE_MATRIX44_HPP

class Vector3;
class Vector4;

class Matrix44 {
public:
	Matrix44();

	Matrix44(
		float m00, float m01, float m02, float m03,
		float m10, float m11, float m12, float m13,
		float m20, float m21, float m22, float m23,
		float m30, float m31, float m32, float m33
	);

	Matrix44(const Matrix44& copy);

	Matrix44& operator=(const Matrix44&  m);
	Matrix44 operator+(const Matrix44& other) const;
	Matrix44 operator-(const Matrix44& other) const;
	
	Matrix44 operator*(const Matrix44& other) const;
	Vector4 operator*(const Vector4& other) const;

	Matrix44 mul(const Matrix44& other) const;
	Vector4 trans(const Matrix44& matrix, const Vector4& vector) const;
	
	Matrix44& transpose();
	
	Matrix44& setIdentity();
	Matrix44& setZero();


	float det();
	Matrix44& invert();
	Matrix44& negate();

	Matrix44& scale(const Vector3& scale);
	Matrix44& rotate(const Vector3& eulerAxis, float angle);
	Matrix44& translate(const Vector3& vec);

	float m00, m01, m02, m03;
	float m10, m11, m12, m13;
	float m20, m21, m22, m23;
	float m30, m31, m32, m33;
};
#endif
