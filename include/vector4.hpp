#ifndef INCLUDE_VECTOR4_HPP
#define INCLUDE_VECTOR4_HPP

class Vector4 {
public:
	Vector4(float x, float y, float z, float w);
	Vector4(const Vector4& copy);

	~Vector4();

	float length() const;
	
	Vector4& operator=(const Vector4& vect);
	Vector4 operator+(const Vector4& other) const;
	Vector4 operator-(const Vector4& other) const;
	Vector4 mul(const Vector4& other) const;
	Vector4 lerp(const Vector4& a, const Vector4& b, float t) const;
	
	static float dot(const Vector4& left, const Vector4& right);
	static float angle(const Vector4& left, const Vector4& right);
	static float distance(const Vector4& a, const Vector4& b);

	void scale(const float s);

	void normalize();
	Vector4 getNormalized(const Vector4& v);

	float getX() const;
	float getY() const;
;	float getZ() const;
	float getW() const;

	void setX(float x);
	void setY(float y);
	void setZ(float z);
	void setW(float w);

	float x, y, z, w;
};
#endif
