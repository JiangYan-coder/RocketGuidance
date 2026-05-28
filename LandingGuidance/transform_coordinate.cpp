#include "stdafx.h"
#include "transform_coordinate.h"

using Matrix3d = Eigen::Matrix3d;
///*********************************************************/
// 函数名称：GetRx
// 函数功能：绕x轴旋转欧拉角矩阵
// 创建时间：2026-01-01
// 创建者：
///*********************************************************/
Matrix3d TransCoordinate::GetRx(const double& angle){ 
	Matrix3d Rx;
	double cos_x = std::cos(angle);
	double sin_x = std::sin(angle);
	Rx << 1, 0, 0,
		  0, cos_x, -sin_x,
		  0, sin_x, cos_x;
	return Rx;
}