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
    //double theta = 0.5;
    //TransCoordinate trans;
    //Matrix3d Rx = trans.GetRx(theta);
    //std::cout << Rx << std::endl;

 //   double angle = 30 * D2R;
 //   TransCoordinate trans;
	//Matrix3d Rx = trans.GetRx(angle);
	//std::cout << Rx << std::endl;

	Matrix3d Rx{};  // 全零初始化一定要加 {}，否则会得到未定义的结果
	std::cout << Rx << std::endl;

	//std::ofstream f("1.txt");	// 创建一个文本文件对象，并打开1.txt文件，如果文件不存在则创建，如果存在则覆盖
	//char buf[0xFF];
	//f.write("hello world", 12); //普通写
	//f.put('c'); //写入一个字符

    return 0;
}

