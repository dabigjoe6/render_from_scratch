#ifndef INCLUDE_MATRIX33_HPP
#define INCLUDE_MATRIX33_HPP

class Vector3;

class Matrix33 {
public:
	Matrix33(
		float m00, float m01, float m02, 
		float m10, float m11, float m12,
		float m20, float m21, float m22
	);

	Matrix33(const Matrix33& copy);

	Matrix33& operator=(const Matrix33&  m);
	Matrix33 operator+(const Matrix33& other) const;
	Matrix33 operator-(const Matrix33& other) const;

	Matrix33 mul(const Matrix33& other) const;
	Vector3 trans(Matrix33& matrix, Vector3 vector);
	
	Matrix33& transpose();
	
	Matrix33& setIdentity();
	Matrix33& setZero();


	float det();
	Matrix33& invert();
	Matrix33& negate();

	
private:
	float m00, m01, m02;
	float m10, m11, m12;
	float m20, m21, m22;
};
#endif
