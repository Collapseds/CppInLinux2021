#pragma once
#include <array>

//creat Vec3D class , using array conserator Vec3D nembers;
class Vec3D {
private:
	std::array <double, 3> v{1.0 , 1.0 , 1.0};
public:
	Vec3D() = default;
};
