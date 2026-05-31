///*********************************************************/
// 项目名称：火箭垂直着陆段制导仿真程序
// 项目功能：解算火箭垂直着陆制导指令
// 创建时间：2026-05-24
// 创建者：
///*********************************************************/

#include "stdafx.h"
#include "parameter.h"
#include "transform_coordinate.h"

int main() {
    using Eigen::Matrix3d;
    //double theta = 0.5;
    //TransCoordinate trans;
    //Matrix3d Rx = trans.GetRx(theta);
    //std::cout << Rx << std::endl;

    double angle = 30 * D2R;
    TransCoordinate trans;
	Matrix3d Rx = trans.GetRx(angle);
	std::cout << Rx << std::endl;

	Matrix3d Ry{};  // 全零初始化一定要加 {}，否则会得到未定义的结果
	std::cout << Ry << std::endl;

    return 0;
}

