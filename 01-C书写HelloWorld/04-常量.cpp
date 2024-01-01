#include <iostream>
using namespace std;

//宏常量#define 常量名 常量值
//修改常量会报错
#define day 7

int main()
{
	cout << "一周有：" << day << "天" << endl;

	//const+变量
	const int month = 12;
	cout << "一年有：" << month << "月" << endl;

	system("pause");

	return 0;
}