/*
C++对象模型和this指针

1.成员变量和成员函数分开存储
在C++中，类内的成员变量和成员函数分开存储，只有非静态成员变量才属于类的对象上，其他成员都不在类的对象上。

***空对象占用内存空间： 1

this指针概念

this指针指向被调用的成员函数所属的对象
this指针是隐含每一个非静态成员函数内的一种指针
this指针不需要定义，直接使用即可

this指针的用途：

当形参和成员变量同名时，可用this指针来区分
在类的非静态成员函数中返回对象本身，可使用return *this

*/
#include <iostream>
using namespace std;
class Person
{
public:

	int age;
	//当形参和成员变量同名时，可用this指针来区分
	Person(int age)
	{
		this->age = age;
	}

	Person& addpersonage(Person p)
	{
		this->age += p.age;
		return *this;
	}

};
void test01()
{
	Person p1(10);
	cout << p1.age << endl;
}
void test02()
{
	Person p1(10);
	Person p2(10);

	p2.addpersonage(p1).addpersonage(p1).addpersonage(p1).addpersonage(p1);
	cout << p2.age << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
