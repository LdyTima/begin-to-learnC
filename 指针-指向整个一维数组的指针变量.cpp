/*
指向整个一维数组的指针变量
作用：可以说明一个指针变量使其指向整个一维数组
语法：
数据类型 （*变量名）[元素个数] = 数组名;
*/
#include <iostream>
using namespace std;
int main()
{
	int b[3][5] = { 12,36,62,14,56,89,74,63,56,99,55,88,33,22,11 };
	int(*p)[5] = b;    //p是一个行指针变量
	//指针方式输出行地址
	cout << "输出b数组每行的首地址:\n";
	for (int i = 0; i < 3; i++)
	{
		cout << p+i << "	";
	}
	cout << endl;
	//数组方式输出行地址
	cout << "输出b数组每行的首地址:\n";
	for (int i = 0; i < 3; i++)
	{
		cout << p[i] <<"	";
	}
	cout << endl;
	//输出b数组每个元素的地址
	//指针方式输出数组每个元素的地址
	cout << "输出b数组每个元素的地址:\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << *(p + i) + j << "	";
		}
		cout << endl;
	}
	cout << endl;
	//数组方式输出数组每个元素的地址
	cout << "输出b数组每个元素的地址:\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << p[i] + j << "	";
		}
		cout << endl;
	}
	cout << endl;
	//指针方式输出数组每个元素的值
	cout << "输出b数组每个元素的值：" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << *(*(p + i) + j) << "	";
		}
		cout << endl;
	}
	cout << endl;
	//数组方式输出数组每个元素的值
	cout << "输出b数组每个元素的值：" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << p[i][j] << "	";
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}