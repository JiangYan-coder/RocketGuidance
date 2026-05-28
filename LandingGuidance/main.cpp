///*********************************************************/
// 项目名称：火箭垂直着陆段制导仿真程序
// 项目功能：解算火箭垂直着陆制导指令
// 创建时间：2026-05-24
// 创建者：wty
///*********************************************************/

#include "stdafx.h"
#include "parameter.h"
#include "transform_coordinate.h"

int main() {
    using Eigen::Matrix3d;
    //Matrix3d A;
    //A << 1, 2, 3, 4, 5, 6, 7, 8, 9;
    //Matrix3d B;
    //B << 9, 8, 7, 6, 5, 4, 3, 2, 1;

    //Matrix3d C = A + B;
    //std::cout << C << std::endl;

    std::cout << PI << std::endl;

    double theta = 0.5;
    TransCoordinate trans;
    Matrix3d Rx = trans.GetRx(theta);
    std::cout << Rx << std::endl;

    std::cout << "A_0 = " << launch::A_0 << "rad" << std::endl;
	std::cout << "omega_e_vec = [" << launch::omega_e_vec << "] rad/s" << std::endl;
	std::cout << launch::R_0.transpose() << std::endl;

    return 0;
}