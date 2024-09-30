#include "../include/genmath.hpp"
#include "../include/defs.hpp"

float GenMath::interpolate(float a, float b, float t) {
	return a + ((b - a) * t);
}

float GenMath::toRadians(float degrees) {
	return (PI/180.0f) * degrees;
}

float GenMath::toDegrees(float radians) {
	return (180.0f/PI) * radians;
}
