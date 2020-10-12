/* ***********************************************************************
						运算符
作用：用于执行代码的运算

					  赋值运算符
作用：用于将表达式的值赋给变量。
包括： =、+=、-=、*=、/=、%=

************************************************************************* */
#include<iostream>
using namespace std;
int main()
{
	int num;
	//  =
	num = 10;
	cout << "num =  :" << num << endl;
	//  +=
	num += 2;                               //没有给num赋新值 ， num仍然取上一步的 num = 10
	cout << "num += 2 :" << num << endl;    // num = num+2 = 10+2 = 12
	//  -=
	num -= 2;                               //num取上一步的 num = 12
	cout << "num -= 2 :" << num << endl;    // num = num-2 = 12-2 = 10
	//  *=
	num *= 2;                               //num取上一步的 num = 10
	cout << "num *= 2 :" << num << endl;    //num = num*2 = 10*2 = 20
	//  /=
	num /= 2;                               //num取上一步的 num = 20
	cout << "num /= 2 :" << num << endl;    //num = num/2 = 20/2 = 10
	//  %=
	num %= 3;                               //num取上一步的 num = 10
	cout << "num %= 3 :" << num << endl;    //num = num%3 = 10%3 = 1

	system("pause");
	return 0;
}