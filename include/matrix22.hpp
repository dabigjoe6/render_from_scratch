#ifndef INCLUDE_MATRIX22_HPP
#define INCLUDE_MATRIX22_HPP

class Vector2;

class Matrix22 {
public:
	Matrix22();

	Matrix22(
		float m00, float m01, 
		float m10, float m11);

	Matrix22(const Matrix22& copy);

	Matrix22& operator=(const Matrix22&  m);
	Matrix22 operator+(const Matrix22& other) const;
	Matrix22 operator-(const Matrix22& other) const;

	Matrix22 mul(const Matrix22& other) const;
	Vector2 trans(Matrix22& matrix, Vector2 vector);
	
	Matrix22& transpose();
	
	Matrix22& setIdentity();
	Matrix22& setZero();


	float det();
	Matrix22& invert();
	Matrix22& negate();

	float m00, m01;
	float m10, m11;
};
#endif
