#include "stdafx.h"
#include "transform_coordinate.h"

using Matrix3d = Eigen::Matrix3d;
/**
* @brief 计算绕x轴旋转方向余弦矩阵
* @param angle 绕x轴旋转角度
* @return 绕x轴旋转方向余弦矩阵
* @data 2026-5-30
*/
Matrix3d TransCoordinate::GetRx(const double& angle){ 
	Matrix3d Rx;
	double cos_x = std::cos(angle);
	double sin_x = std::sin(angle);
	Rx << 1, 0, 0,
		  0, cos_x, -sin_x,
		  0, sin_x, cos_x;
	return Rx;
}
/**
* @brief 计算绕y轴旋转方向余弦矩阵
* @param angle 绕y轴旋转角度
* @return 绕y轴旋转方向余弦矩阵
* @data 2026-5-30
*/
Matrix3d TransCoordinate::GetRy(const double& angle){
	Matrix3d Ry;
	double cos_y = std::cos(angle);
	double sin_y = std::sin(angle);
	Ry << cos_y, 0, sin_y,
		  0, 1, 0,
		  -sin_y, 0, cos_y;
	return Ry;
}
/**
* @brief 计算绕z轴旋转方向余弦矩阵
* @param angle 绕z轴旋转角度
* @return 绕z轴旋转方向余弦矩阵
* @data 2026-5-30
*/
Matrix3d TransCoordinate::GetRz(const double& angle){
	Matrix3d Rz;
	double cos_z = std::cos(angle);
	double sin_z = std::sin(angle);
	Rz << cos_z, -sin_z, 0,
		  sin_z, cos_z, 0,
		  0, 0, 1;
	return Rz;
}