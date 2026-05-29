#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Data // 数据类
{
public:
	void AddData(Data &data);					 // 新增学生信息
	int FindMenu();								 // 查找数据的菜单
	int SearchData(Data &data);					 // 查找数据
	int Menu();									 // 菜单
	int ModifyMenu();							 // 修改数据菜单
	void ModifyData(Data &data);				 // 修改学生记录
	int DeleteMenu();							 // 删除数据菜单
	int ShowMenu();								 // 显示数据菜单
	void DeleteData(Data &data);				 // 删除学生记录
	int SortMenu();								 // 排序数据菜单
	void Sort(Data &data, vector<int> &indices); // 排序函数
	void ShowData(Data &data);					 // 显示学生考勤数据
	void SortData(Data &data);					 // 排序数据
	void Exit(Data &data);						 // 保存数据到文件并退出程序
	void LoadDataFromFile(Data &data);			 // 读取文件数据
	int StatisticMenu();						 // 生成统计表菜单
	void StatisticData(Data &data);				 // 生成统计表

private:
	vector<string> m_num;		   // 学号
	vector<string> m_name;		   // 姓名
	vector<int> m_classNum;		   // 班级
	vector<int> m_check_month;	   // 考勤月
	vector<int> m_check_day;	   // 考勤日
	vector<string> m_check_status; // 考勤状态
};

