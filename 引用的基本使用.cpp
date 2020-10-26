/*
引用的基本使用
作用： 给变量起别名
语法： 数据类型  &别名 = 原名

引用注意事项
引用必须初始化
引用在初始化后，不可以改变

*/
#include <iostream>
using namespace std;

int main()
{
	int a = 10;  //定义局部变量
	//int &b;     引用必须初始化
	int &b = a;  //定义引用，给变量a起别名，引用在初始化后，不可以改变

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	system("pause");
	return 0;
}