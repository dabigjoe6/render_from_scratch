#ifndef INCLUDE_GENMATH_HPP
#define INCLUDE_GENMATH_HPP

class GenMath {
public:
	static float interpolate(float a, float b, float t);
	static float toRadians(float degrees);
	static float toDegrees(float radians);
};
#endif
