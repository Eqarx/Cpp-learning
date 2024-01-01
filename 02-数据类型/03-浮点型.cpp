//float单精度，7位有效数字
//double双精度，15-16位有效数字
//一般只输出6位有效数字
#include <iostream>
using namespace std;

int main3()
{
	float f1 = 3.1415926;//会被编译器认为是double类型
	float f2 = 3.1415926f;
	double d1 = 3.1415926;
	cout << "f1=" << f1 << endl;
	cout << "f2=" << f2 << endl;
	cout << "d1=" << d1 << endl;

	//科学计数法
	//3e2 = 3*10^2 = 300
	//3e-2 = 3*10^(-2) = 0.03
	return 0;
}