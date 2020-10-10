#include <iostream>
using namespace std;

//常量
//作用：记录程序中不可更改的数据
//用法：1.宏常量           #define 常量名 常量值
//      2.修饰的常量       const 数据类型 常量名 = 常量值 ；

#define year 2020

int main()
{
	cout << endl<<"今天是" << year << "年";
	//year = 2020;  报错原因： 宏常量是不可以被修改的

	const int month = 10;                               //定义一个整型常量month
	cout << month << "月";
	//month = 11;   报错原本： 常量是不可以被修改的

	int day = 10;                                       //定义一个整型变量day
	cout << day << "日" << endl << endl;
	
	system("pause");
	return 0;
}