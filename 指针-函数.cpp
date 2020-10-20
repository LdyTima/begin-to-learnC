/*
指针和函数
作用：利用指针作函数参数，可以修改实参的值
值传递：不会改变实参
地址传递：会改变实参（实参和形参公用一个内存空间）
*/
#include <iostream>
using namespace std;
void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
void swap2(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	//值传递
	swap1(a, b);
	cout <<"值传递："<< "a =" << a <<"	"<< "b = " << b << endl;
	//地址传递
	swap2(&a,&b);
	cout <<"地址传递："<< "a =" << a << "	" << "b = " << b << endl;
	system("pause");
	return 0;
}