#ifndef _TRANSFORM_COORDINATE_H_
#define _TRANSFORM_COORDINATE_H_
#pragma once

#include <Eigen/Dense>	// 预编译头包含就可以，但头文件本身最好包含，提高程序可靠性


/// <summary>
/// 坐标系转换类
/// </summary>
class TransCoordinate {
	public:
		using Matrix3d = Eigen::Matrix3d;
		// 绕x轴旋转欧拉角矩阵
		Matrix3d GetRx(const double& angle);
	private:
};

#endif // !_TRANSFORM_COORDINATE_H_