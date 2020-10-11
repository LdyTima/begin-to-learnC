/* **************************************************
                    数据的输入与输出
1.cin （输入） -- 默认与键盘链接，接受从键盘输入的数据信息。
语法：cin >> 变量 ；
2.cout（输出） -- 默认与屏幕链接，将数据显示到屏幕上。
语法： cout << 变量 ；

**************************************************** */
#include <iostream>
using namespace std;
#include<string>
int main()
{
	//整型的输入输出
	int num ;
	cout << "请给整型int赋值：" << endl;
	cin >> num;
	cout << "整型int = " << num << endl;
	//浮点型的输入输出
	double d ;
	cout << "请给浮点型 double 赋值：" << endl;
	cin >> d;
	cout << "浮点型 double = " <<d<< endl;
	//字符型的输入输出
	char ch ;
	cout << "请给字符型 char 赋值：" << endl;
	cin >> ch;
	cout << "字符型 char = " << ch << endl;
	//字符串的输入输出
	string str;
	cout << "请给字符串赋值：" << endl;
	cin >> str;
	cout << "ans = " << str << endl;
	//布尔型输入输出
	bool flag;
	cout << "请给布尔型bool赋值：" << endl;
	cin >> flag;    //输入0为0 其余任何非0数都是1。
	cout << "布尔型 bool = " << flag << endl;

	//实例     输入-520   显示-我爱C++！
	int num1;
	string str1 = "我爱C++！";
	cout << "请输入 520 ：" << endl;
	cin >> num1;
	cout << str1 << endl;

	system("pause");
	return 0;
}