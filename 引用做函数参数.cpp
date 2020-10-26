/*
引用做函数参数
作用：函数传参时，可以利用引用的技术让形参修饰实参
优点：可以简化指针修改实参
通过引用参数产生的效果同按地址传递是一样的。引用的语法更清楚简单

引用做函数返回值
作用：引用是可以作为函数的返回值存在的
注意：不要返回局部变量引用
用法：函数调用作为左值

常量引用
作用：常量引用主要用来修饰形参，防止误操作
在函数形参列表中，可以加const修饰形参，防止形参改变实参

*/

#include <iostream>
using namespace std;
//引用做函数参数
//定义引用传递
void chuan(int &a, int &b)
{
	a = 100;
	b = 200;
}
//引用做函数返回值
int& chuan2()
{
	//int a = 1000;  不要返回局部变量引用（栈区，函数执行完释放）
	static int a = 1000;  ////返回静态变量引用(全局区，由系统释放)
	return a;
}
//常量引用
void chuan3(const int &a)
{
	//a = 100;  函数中利用常量引用防止误操作修改实参

}
int main()
{
	int a = 10;
	int b = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//调用引用做函数参数
	chuan(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//调用引用做函数返回值
	int &ref = chuan2();
	cout << "ref = " << ref << endl;
	//函数调用作为左值
	chuan2() = 10;
	cout << "ref = " << ref << endl;
	//常量引用
	//int& ref = 10;  引用本身需要一个合法的内存空间，因此这行错误
	//加入const就可以了，编译器优化代码，int temp = 10; const int& ref = temp;
	const int& ref1 = 10;
	//ref = 100;  //加入const后不可以修改变量
	cout << ref1 << endl;

	chuan3(a);
	cout << "a = " << a << endl;

	system("pause");
	return 0;
}