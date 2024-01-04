//用于表示不显示的ASCII字符
//常用：\n（换行）、\\（反斜线\）、\t（TAP键）

#include <iostream>
using namespace std;

int main()
{
	cout << "hello world\n";
	cout << "\\" << endl;
	cout << "aaa\tbbb" << endl;
	cout << "aaaa\tbbb" << endl;
	cout << "aaaaa\tbbb" << endl;
	cout << "aaaaaa\tbbb" << endl;//一个\t占8个位置

	system("pause");
	return 0;
}