# Student Attendance System / 大学生考勤系统

English | 中文

## Overview / 项目简介

**EN**: A C++ console-based student attendance management system. It supports record creation, search, update, deletion, sorting, statistics, and file-based persistence.

**中文**：一个基于 C++ 的控制台学生考勤系统，支持增删改查、排序、统计与文件持久化。

## Features / 功能

- Add, search, update, and delete attendance records. / 新增、查找、修改、删除考勤记录。
- Query and sort by student ID, name, attendance date, or class. / 按学号、姓名、考勤日期或班级查询与排序。
- Generate summary reports in the console. / 在控制台生成汇总报表。
- Read and save data through text-file persistence. / 通过文本文件持久化读取与保存数据。

## Project Structure / 目录结构

- `src/`: main source code / 主程序源码
- `include/`: headers / 头文件
- `data/`: sample data and runtime data files / 示例数据与运行时数据文件

## Build & Run / 构建与运行

Using CMake / 使用 CMake：

```bash
cmake -S . -B build
cmake --build build
./build/student-attendance-system
```

Using g++ / 使用 g++：

```bash
g++ -std=c++11 -Iinclude src/main.cpp -o student-attendance-system
./student-attendance-system
```

Keep the working directory at the repository root so the program can read and write `data/student_data.txt`. / 运行时请保持工作目录在仓库根目录，以便正确读写 `data/student_data.txt`。

## Attendance Symbols / 考勤符号

- Present / 出勤：`√`
- Absent / 旷课：`X`
- Personal leave / 事假：`△`
- Sick leave / 病假：`○`
- Late / 迟到：`+`
- Leave early / 早退：`-`

## Data File / 数据文件

The program reads and writes tab-separated data in `data/student_data.txt` by default. / 程序默认读写 `data/student_data.txt`，文件为制表符分隔的文本数据。
