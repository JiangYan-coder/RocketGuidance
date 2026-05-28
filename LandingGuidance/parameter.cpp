#include "stdafx.h"
#include "parameter.h"

namespace launch {
    using  namespace earth;
    const double A_0 = 133.0 * D2R; // 发射点经度
    const double B_0 = 39.0 * D2R;  // 发射点纬度
    const double L_0 = 104.0 * D2R; // 发射点大地坐标系X轴方位角
    const double H_0 = 1067.0;      // 发射点大地坐标系原点高度
    // 地心纬度：tan(phi) = (1 - e²) * tan(B)
    const double phi_0 = std::atan((1.0 - e2) * std::tan(B_0));
    // 大地纬度与地心纬度差值
    const double mu_0 = B_0 - phi_0;
    // 地心半径
    const double sin_phi_0 = std::sin(phi_0);
    const double cos_phi_0 = std::cos(phi_0);
	
    const double r_0 = (a_e * b_e) / std::sqrt(a_e * a_e * sin_phi_0 * sin_phi_0
                       + b_e * b_e * cos_phi_0 * cos_phi_0);
    // 地心矢径在发射坐标系三分量
    const double sin_mu_0 = std::sin(mu_0);
    const double cos_mu_0 = std::cos(mu_0);
    const double sin_A_0 = std::sin(A_0);
    const double cos_A_0 = std::cos(A_0);
	const double sin_B_0 = std::sin(B_0);
	const double cos_B_0 = std::cos(B_0);
	
    const Vector3d R_0 = {-r_0 * sin_mu_0 * cos_A_0,
                            r_0 * cos_mu_0 + H_0,
                            r_0 * sin_mu_0 * sin_A_0};
    // 地球自转角速度矢量在发射系投影
    const Vector3d omega_e_vec = { omega_e * cos_B_0 * cos_A_0,
                                    omega_e * sin_B_0,
	                                -omega_e * cos_B_0 * sin_A_0};
}

/*
namespace environment
{
    LaunchParam::LaunchParam(double A_0, double B_0, double L_0, double H_0)
        : A_0(A_0) , B_0(B_0), L_0(L_0), H_0(H_0)  // ← 初始化列表：参数直接绑定到成员，零开销
    {
        using namespace earth;

        // 地心纬度：tan(phi) = (1 - e²) * tan(B)
        phi_0 = std::atan((1.0 - e2) * std::tan(B_0));

        // 大地纬度与地心纬度差值
        mu_0 = B_0 - phi_0;

        // 卯酉圈曲率半径
        const double sin_phi_0 = std::sin(phi_0);
        const double cos_phi_0 = std::cos(phi_0);
        r_0 = (a_e * b_e) / std::sqrt(a_e * a_e * sin_phi_0 * sin_phi_0
                                    + b_e * b_e * cos_phi_0 * cos_phi_0);

        // 地心矢径在发射坐标系三分量
        const double sin_mu_0 = std::sin(mu_0);
        const double cos_mu_0 = std::cos(mu_0);
        const double sin_A_0 = std::sin(A_0);
        const double cos_A_0 = std::cos(A_0);
        R_0 << -r_0 * sin_mu_0 * cos_A_0,
                r_0 * cos_mu_0 + H_0,
                r_0 * sin_mu_0 * sin_A_0;

        // 地球自转角速度矢量在发射系投影
        omega_e_vec <<  omega_e * std::cos(B_0) * cos_A_0,
                        omega_e * std::sin(B_0),
                       -omega_e * std::cos(B_0) * sin_A_0;
    }
    const LaunchParam launch(133.0 * D2R, 39.0 * D2R, 104.0 * D2R, 1067.0);
}
*/

namespace landing {
    using  namespace earth;
	const double A_1 = 117.0 * D2R; // 着陆点经度
	const double B_1 = 36.0 * D2R;  // 着陆点纬度
	const double L_1 = 104.0 * D2R; // 着陆点大地坐标系X轴方位角
	const double H_1 = 1650.0;      // 着陆点大地坐标系原点高度
    // 地心纬度：tan(phi) = (1 - e²) * tan(B)
    const double phi_1 = std::atan((1.0 - e2) * std::tan(B_1));
	const double mu_1 = B_1 - phi_1;
    // 地心半径
    const double sin_phi_1 = std::sin(phi_1);
    const double cos_phi_1 = std::cos(phi_1);
    const double r_1 = (a_e * b_e) / std::sqrt(a_e * a_e * sin_phi_1 * sin_phi_1
                        + b_e * b_e * cos_phi_1 * cos_phi_1);
    // 地心矢径在发射坐标系三分量
    const double sin_mu_1 = std::sin(mu_1);
    const double cos_mu_1 = std::cos(mu_1);
    const double sin_A_1 = std::sin(A_1);
    const double cos_A_1 = std::cos(A_1);
    const double sin_B_1 = std::sin(B_1);
    const double cos_B_1 = std::cos(B_1);

    const Vector3d R_1 = { -r_1 * sin_mu_1 * cos_A_1,
                            r_1 * cos_mu_1 + H_1,
                            r_1 * sin_mu_1 * sin_A_1 };
    // 地球自转角速度矢量在发射系投影
    const Vector3d omega_e_vec = { omega_e * cos_B_1 * cos_A_1,
                                    omega_e * sin_B_1,
                                    -omega_e * cos_B_1 * sin_A_1 };
}
