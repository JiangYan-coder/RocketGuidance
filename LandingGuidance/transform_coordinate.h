#ifndef _TRANSFORM_COORDINATE_H_
#define _TRANSFORM_COORDINATE_H_
#pragma once

#include <Eigen/Dense>	// 预编译头包含就可以，但头文件本身最好包含，提高程序可靠性

/**
* @file transform_coordinate.h
* @brief 坐标系转换类
*/
class TransCoordinate {
	using Matrix3d = Eigen::Matrix3d;
	public:
		// 绕x轴旋转欧拉角矩阵
		Matrix3d GetRx(const double& angle);
		// 绕y轴旋转欧拉角矩阵
		Matrix3d GetRy(const double& angle);
		// 绕z轴旋转欧拉角矩阵
		Matrix3d GetRz(const double& angle);
	private:
};

#endif // !_TRANSFORM_COORDINATE_H_