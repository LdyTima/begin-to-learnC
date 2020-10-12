/* ***********************************************************************
                        运算符
作用：用于执行代码的运算

                      算数运算符
作用：用于处理四则运算。
包括：+、-、*、/、%（取余运算符）、++（自增运算符）、--（自减运算符）

************************************************************************* */
#include <iostream>
using namespace std;
int main()
{
	int num1 = 20;
	int num2 = 10;
	cout << "num1 + num2 = " << num1 + num2 << endl;  //加法运算
	cout << "num1 - num2 = " << num1 - num2 << endl;  //减法运算
	cout << "num1 * num2 = " << num1 * num2 << endl;  //乘法运算
	
	// 两个整数相除，结果依然是整数
	// 整型（int）时--若不是整除，不会显示小数部分，结果舍弃小数部分。
	// （除数/被除数）其中有一个是浮点型（float/double）时--若不是整除，仍会显示小数部分。
	cout << "num1 / num2 = " << num1 / num2 << endl; //整型（int）整除时
	int num3 = 1;
	double num4 = 2.5;
	int num5 = 2;
	cout << "（整型）不被整除时 num3 / num5 = " << num3 / num5 << endl;	                              //整型（int）不被整除时
	cout << "（除数/被除数）其中有一个是浮点型不被整除时 num3 / num4 = " << num3 / num4 << endl;	      //（除数/被除数）其中有一个是浮点型（float/double）不被整除时

	//取余运算符
	//两个小数不可以取余（取模）
	cout << "num1 % num2 = "<< num1 % num2 << endl;

	int valuel1 = 5, valuel2 = 5, ans1, ans2;
	//前置递增(递减) --先将变量数+1(-1)，然后取新值参与其他运算。
	ans1 = ++valuel1+10;       //让变量+1 valuel=6,然后参与运算 ans = 6+10=16。
	//后置递增(递减) --先将变量数参与其他运算，再将变量数+1(-1)
	ans2 = valuel2++ +10;      //先参与运算 ans = 5+10=15，再变量+1 valuel=6。
	
	cout << "ans\tvaluel" << endl;
	cout << ans1 << "\t" << valuel1 << endl;
	cout << ans2 << "\t" << valuel2 << endl;


	system("pause");
	return 0;
}