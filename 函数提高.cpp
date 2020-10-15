/* ***********************************************************************************
									函数提高
函数的默认参数（具有缺省值数值的函数）
函数形参列表中的形参是可以默认的
语法： 返回值类型 函数名 （参数 = 默认值）
		{
			函数体语句;
		}
函数的重载
作用：函数名可以相同，提高复用性。
函数重载满足条件：
1.同一个作用域下
2.函数名称相同
3.函数参数的 类型不同、个数不同、顺序不同

函数重载的注意事项：
1.函数的返回值不可以作为函数重载的条件。
2.引用作为重载条件。
3.函数重载碰到函数默认参数
************************************************************************************* */

//如果某个位置有参数值，那么从这个位置往后，从左向右，必须都要有默认值
/*
int func(int a = 10, int b = 10,int c)
{
	return a + b;
}
*/
//如果函数声明有默认值，函数实现的时候就不能有默认参数（二义性）
/*
int func(int a = 10, int b = 10);//声明函数
int func(int a = 10, int b = 10) //实现函数
{
	return a + b;
}
*/

/*
int func(int a = 10, int b = 10)
{
	return a + b;
}
#include <iostream>
using namespace std;
int main()
{
	cout << func() << endl;
	system("pause");
	return 0;
}
*/

//函数的重载
/*
#include <iostream>
using namespace std;
void func()
{
	cout << "func()的调用 " << endl;
}
void func(float b)    //类型不同
{
	cout << "func(float b)的调用 " << endl;
}
void func(int a, int b)  //个数不同
{
	cout << "func(int a, int b)的调用 "<<endl;
}
void func(int a, double b)   //顺序不同
{
	cout << "func(int a, double b)的调用 "<<endl;
}
void func(double b, int a)   //顺序不同
{
	cout << "func(double b, int a)的调用 "<<endl;
}
int main()
{
	func();
	func(10.6);
	func(10, 12);
	func(10, 1.3);
	func(1.3, 10);

}
*/

/*
//引用作为重载条件
#include <iostream>
using namespace std;
void func(int &a)
{
	cout << "func(int &a)的调用" << endl;
}
void func(const int &a)
{
	cout << "func(const int &a)的调用" << endl;
}

int main()
{
	int a = 10;
	func(a);

	func(10);
}
*/


//函数重载碰到函数默认参数
#include <iostream>
using namespace std;
void func(int a)
{
	cout << "func(int a)的调用" << endl;
}
void func(int a, int b = 10)
{
	cout << "func(int a, int b = 10)的调用" << endl;
}
int main()
{
	//func(10); 报错原因：碰到默认值会产生歧义 （二义性），尽量避免。
	func(10,10);
}
