/*
继承同名成员处理方式
访问子类同名成员   直接访问即可
访问父类同名成员   需要加作用域

1. 子类对象可以直接访问到子类中同名成员
2. 子类对象加作用域可以访问到父类同名成员
3. 当子类与父类拥有同名的成员函数，子类会隐藏父类中同名成员函数，加作用域可以访问到父类中同名函数

继承同名静态成员处理方式
静态成员和非静态成员出现同名，处理方式一致
访问子类同名成员   直接访问即可
访问父类同名成员   需要加作用域
同名静态成员处理方式和非静态处理方式一样，只不过有两种访问的方式（通过对象 和 通过类名）

*/
#include <iostream>
#include <string>
using namespace std;
class father
{
public:
	string m_name;

	father()
	{
		m_name = "李东岳";
	}
	void name()
	{
		cout << "父亲的名字为：" << m_name << endl;
	}
	void name(string name)
	{
		cout << "父亲的名字为：" << m_name << endl;
	}
};
class son : public father
{
public:
	string m_name;
	son()
	{
		m_name = "赵宏磊";
	}
	void name()
	{
		cout << "儿子的名字为：" << m_name << endl;
	}
};
//静态
class Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Base的func调用" << endl;
	}
	static void func(int a)
	{
		cout << "Base的func（int a ）的调用" << endl;
	}
};
int Base::m_A = 100;
class Son : public Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Son 的 func 的调用" << endl;
	}
};
int Son::m_A = 200;
void test01()
{
	//通过对象调用
	Son son1;
	son1.func();
	son1.Base::func();
	son1.Base::func(10);
	cout << "--------------"<< endl;
	//通过类名调用
	Son::func();
	Son::Base::func();
	Son::Base::func(100);
}
void test()
{
	son son1;
	string name = "李东岳";
	son1.m_name;
	son1.name(); // 访问子类成员 直接访问
	//当子类与父类拥有同名的成员函数，子类会隐藏父类中所有版本的同名成员函数
	//son1.name(name);  
	//如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
	son1.father::m_name;
	son1.father::name(name);
	son1.father::name(); //访问父类成员 加作用域访问
} 
int main()
{
	//test();
	test01();
	system("pause");
	return 0;
}