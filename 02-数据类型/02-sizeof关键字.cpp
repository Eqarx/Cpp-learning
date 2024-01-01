#include <iostream>
using namespace std;

//sizeof(数据类型/变量)用于统计数据类型占用空间的大小

int main2()
{
	int a = 10;
	cout << "short所占空间大小：" << sizeof(short) << endl;
	cout << "int所占空间大小：" << sizeof(a) << endl;
	cout << "long long所占空间大小：" << sizeof(long long) << endl;
	return 0;
}