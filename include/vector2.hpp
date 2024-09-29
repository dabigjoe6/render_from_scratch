#ifndef INCLUDE_VECTOR2_HPP
#define INCLUDE_VECTOR2_HPP

class Vector2 {

public:
	Vector2(float x, float y);
	Vector2(const Vector2& copy);

	~Vector2();

	float length() const;
	
	Vector2& operator=(const Vector2& vect);
	Vector2 operator+(const Vector2& other) const;
	Vector2 operator-(const Vector2& other) const;
	Vector2 mul(const Vector2& other) const;
	Vector2 lerp(const Vector2& a, const Vector2& b, float t) const;
	
	static float dot(const Vector2& left, const Vector2& right);
	static float angle(const Vector2& left, const Vector2& right);
	static float distance(const Vector2& a, const Vector2& b);

	void scale(const float s);

	void normalize();
	Vector2 getNormalized(const Vector2& v);


	float getX() const;
	float getY() const;

	void setX(float x);
	void setY(float y);
private:
	float x, y;
	
};

#endif
