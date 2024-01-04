//语法：char ch = 'a'
//注：1、要用单引号
//    2、引号内【只能】有一个字符
//字符型储存的是ASCII编码，而不是字符本身

//常见错误：
//char ch1 = "a"
//char ch2 = 'abcde'

#include <iostream>
using namespace std;

int main4()
{
	char ch1 = 'a';
	cout << "ch1=" << int(ch1) << endl;//输出字符对应ASCII编码
	return 0;
}