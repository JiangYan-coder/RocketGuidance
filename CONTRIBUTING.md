# CONTRIBUTING.md

## 目的
本文件定义代码贡献与注释的约定，旨在保证可读性、可维护性与一致性。所有提交应遵守本规范；如需例外，需在 PR 描述中说明并通过审查。默认编码为 UTF-8。

## 总体原则
- 可读性优先：注释应解释为什么（why），不是机械复述代码在做什么（what）。
- 简洁明了：避免冗长，自解释的代码应少注释。
- 同步更新：任何修改代码逻辑的变更必须同步更新注释。
- 语言：公共 API 与对外库使用英文注释；内部实现可按团队约定使用中文或英文。

## 文件头模板
每个源文件（`.cpp`/`.h`）应包含文件头：

```cpp src/example.h
/**
 * @file example.h
 * @brief 简短说明该文件目的
 * @author Your Name
 * @date 2026-05-24
 * @copyright Copyright (c) <Year> <Owner>
 */
```

## Doxygen 风格（推荐用于公共 API）
- 使用 `/** ... */` 或 `///` 风格。
- 常用标签：`@brief`, `@param`, `@return`, `@throws` / `@exception`, `@note`, `@example`。
- 每个导出函数、类、结构体应有简短的 Doxygen 注释。

示例：

```cpp src/math_utils.h
/**
 * @brief 计算两个整数之和
 *
 * 说明：该函数不会进行溢出检测。
 *
 * @param a 第一个加数
 * @param b 第二个加数
 * @return 两个整数的和
 */
int Add(int a, int b);
```

## 类和成员注释示例

```cpp src/robot/Controller.h
/**
 * @brief 运动控制器，负责轨迹生成与速度限制
 */
class Controller {
public:
    /**
     * @brief 构造函数
     * @param maxSpeed 最大允许速度（m/s）
     */
    Controller(double maxSpeed);

    /**
     * @brief 计算下一步控制量
     * @param dt 时间步长（s）
     * @return 控制量结构
     */
    ControlOutput Step(double dt);
};
```

## 内联注释与复杂逻辑
- 遇到复杂算法或权衡决策时，添加短句注释解释设计意图与假设。
- 避免对显而易见的代码进行注释（例如简单的赋值或自解释变量）。

示例：

```cpp
// 使用四元数插值以避免万向节死锁（Gimbal lock）问题
orientation = Slerp(prev, next, t);
```

## 命名与风格建议
- 函数、变量、类命名遵循项目既有风格（若无，采用驼峰或下划线风格并在 PR 中说明）。
- 注释中引用的符号名应与代码一致，避免使用模糊描述。

## TODO / FIXME
- TODO: 表示未来需要实现的功能或改进。
- FIXME: 表示已知 bug 或危险的临时实现。
- 格式：`// TODO(@owner): 描述` 或 `// FIXME(@owner): 描述`。

示例：

```cpp
// TODO(john): 支持速度限制动态配置
// FIXME: 在极端传感器丢失情况下会发生 NaN
```

## 审查清单（PR 检查）
- 注释是否解释了“为什么”而不是“做什么”？
- 公共 API 是否有 Doxygen 注释？
- 是否存在过时或不正确的注释？
- TODO/FIXME 是否带有负责人与截止信息（必要时）？
- 代码和注释是否一致？

## 如何更新这些规范
通过提交 PR 修改本文件。变更需在 PR 描述中说明动机并获得至少一名授权审查者批准。

---
自动生成的注释规范。如需调整注释风格（例如改用不同的文档工具），请在团队会议上达成一致并更新本文件。