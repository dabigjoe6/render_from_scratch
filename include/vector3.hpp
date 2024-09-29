#ifndef INCLUDE_VECTOR3_HPP
#define INCLUDE_VECTOR3_HPP

class Vector3 {
public:
	Vector3(float x, float y, float z);
	Vector3(const Vector3& copy);

	~Vector3();

	float length() const;
	
	Vector3& operator=(const Vector3& vect);
	Vector3 operator+(const Vector3& other) const;
	Vector3 operator-(const Vector3& other) const;
	Vector3 mul(const Vector3& other) const;
	Vector3 lerp(const Vector3& a, const Vector3& b, float t) const;

	static float dot(const Vector3& left, const Vector3& right);
	static Vector3 cross(const Vector3& left, const Vector3& right);

	static float angle(const Vector3& left, const Vector3& right);
	static float distance(const Vector3& a, const Vector3& b);

	void scale(const float s);

	void normalize();
	Vector3 getNormalized(const Vector3& v);


	float getX() const;
	float getY() const;
	float getZ() const;

	void setX(float x);
	void setY(float y);
	void setZ(float z);
private:
	float x, y, z;
};

#endif
