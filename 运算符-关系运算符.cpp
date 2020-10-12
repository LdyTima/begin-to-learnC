/* ***********************************************************************
						     运算符
作用：用于执行代码的运算

					  关系（比较）运算符
作用：用于表达式的比较，并返回一个真值或假值。
包括：==、！=、<、>、<=、>=

************************************************************************* */
#include<iostream>
using namespace std;
int main()
{
	int num1, num2,flag;
	cout << "输入数值 num1 = " << endl;
	cin >> num1;
	cout << "num1 = " << num1 << endl;
	cout << "输入数值 num2 = " << endl;
	cin >> num2;
	cout << "num2 = " << num2 << endl;

	//  ==
	flag = num1 == num2;
	cout << "num1 等于 num2?" << endl <<"是（1）否（0）："<< flag << endl;
	//  !=
	cout << "num1 不等于 num2?" << endl << "是（1）否（0）：" <<  (num1 != num2) << endl;   //若想在输出时直接运算 需用小括号括住关系表达式。
	//  <
	flag = num1 < num2;
	cout << "num1 小于 num2?" << endl << "是（1）否（0）：" << flag << endl;
	//  >
	flag = num1 > num2;
	cout << "num1 大于 num2?" << endl << "是（1）否（0）：" << flag << endl;
	//  <=
	flag = num1 <= num2;
	cout << "num1 小于等于 num2?" << endl << "是（1）否（0）：" << flag << endl;
	//  >=
	flag = num1 >= num2;
	cout << "num1 大于等于 num2?" << endl << "是（1）否（0）：" << flag << endl;

	system("pause");
	return 0;
}