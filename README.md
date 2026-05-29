# Student Attendance System（大学生考勤系统）

一个基于 C++ 的控制台学生考勤系统，支持增删改查、排序、统计与文件持久化。

## 功能
- 新增、查找、修改、删除考勤记录
- 按学号/姓名/考勤日期/班级查询与排序
- 生成汇总报表（控制台输出）
- 文本文件持久化读取与保存

## 目录结构
- `src/` 主程序源码
- `include/` 头文件
- `data/` 示例数据与运行时数据文件

## 构建与运行
使用 CMake：
```
cmake -S . -B build
cmake --build build
./build/student-attendance-system
```

或使用 g++：
```
g++ -std=c++11 -Iinclude src/main.cpp -o student-attendance-system
./student-attendance-system
```

运行时请保持工作目录在仓库根目录，以便正确读写 `data/student_data.txt`。

## 考勤符号
出勤 √，旷课 X，事假 △，病假 ○，迟到 +，早退 -

## 数据文件
程序默认读写 `data/student_data.txt`，为制表符分隔的文本数据。
