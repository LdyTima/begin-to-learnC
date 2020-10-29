/*
初始化列表
作用：
C++提供了初始化列表语法，用来初始化属性

语法：构造函数()：属性1(值1),属性2（值2）..
		{
			
		}

类对象作为类成员
C++类中的成员可以是另一个类的对象，我们称该成员为 对象成员

*/
#include <iostream>
using namespace std;
#include<string>
class Phone
{
public:
	//手机名字
	string m_pname;
	Phone(string pname)
	{
		m_pname = pname;
	}
	~Phone()
	{
		cout << "Phone析构函数的调用" << endl;
	}
};

class Person
{
public:
	//属性
	//姓名
	string m_name;
	//手机
	Phone m_Phone;
	Person(string name, string pname) :m_name(name), m_Phone(pname)
	{
		//m_name = name;
		//m_Phone = pname;
	}
	~Person()
	{
		cout << "Person析构函数的调用" << endl;
	}
};
//其他类对象作为本类成员，构造函数先构造类对象，再构造自身。
//析构函数与构造函数相反。
void test()
{
	Person p1("赵宏磊","华为");
	cout << p1.m_name << "	用：" << p1.m_Phone.m_pname << endl;

}
int main()
{
	test();
	system("pause");
	return 0;
}