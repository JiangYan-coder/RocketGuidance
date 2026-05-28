#ifndef _PARAMETER_H_
#define _PARAMETER_H_
#pragma once

#include<Eigen/Dense>

// 角度弧度转换使用频繁，为了代码简洁，定义为全局变量
constexpr double PI = 3.14159265358979323846;
constexpr double D2R = PI / 180.0;
constexpr double R2D = 180.0 / PI;    

/// <summary>
/// 地球物理常数
/// </summary>
namespace earth
{
    constexpr double a_e = 6378137.0;       // 地球赤道半径
    constexpr double f = 1 / 298.257223563; // 地球扁率
    constexpr double b_e = a_e * (1 - f);   // 地球极地半径
    constexpr double e2 = 2 * f - f * f;    // 偏心率的平方
    constexpr double g0 = 9.80665;          // 海平面重力加速度大小
    constexpr double omega_e = 7.292115e-5; // 地球自转角速度大小
    constexpr double fM= 3.986004418e14;    // 地球引力常数
    constexpr double p_a0 = 101325.0;       // 海平面标准大气压
    constexpr double rho_0 = 1.225;         // 海平面标准大气密度
}

/// <summary>
/// 发射点参数
/// </summary>
namespace launch {
    extern const double A_0;
    extern const double B_0;
    extern const double L_0;
    extern const double H_0;
    extern const double phi_0;
    extern const double mu_0;
    extern const double r_0;
	extern const Eigen::Vector3d R_0;
	extern const Eigen::Vector3d omega_e_vec;
}
/// <summary>
/// 着陆点参数
/// </summary>
namespace landing {
    extern const double A_1;
    extern const double B_1;
    extern const double L_1;
    extern const double H_1;
	extern const double phi_1;
	extern const double mu_1;
	extern const double r_1;
	extern const Eigen::Vector3d R_1;
	extern const Eigen::Vector3d omega_e_vec;
}

/// <summary>
/// 火箭飞行参数
/// </summary>
namespace rocket
{
    // 发动机
    extern const double P_max;
    extern const double I_sp;

    // 箭体结构
    extern const double mass_dry;
}
#endif // !_PARAMETER_H_


