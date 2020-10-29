/*
静态成员
静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
静态成员分为：
静态成员变量
  所有对象共享同一份数据
  在编译阶段分配内存
  类内声明，类外初始化
静态成员函数
  所有对象共享同一个函数
  静态成员函数只能访问静态成员变量

*/
#include <iostream>
using namespace std;
class Person
{
public:
	//静态成员函数只能访问静态成员变量
	static void func() //静态成员函数
	{
		m_A = 100;
		//m_B = 100;  不可以访问非静态成员变量
		cout << "func的调用" << endl;
	}
	static int m_A;//静态成员变量
	int m_B;
};

int Person::m_A = 10;

void test()
{
	//静态成员函数访问方式
	//1.通过对象
	Person p1;
	p1.func();
	//2.通过类名
	Person::func();

	cout << p1.m_A << endl;
	cout << Person::m_A << endl;

}
int main()
{
	test();

	system("pause");
	return 0;
}
