/*
运算符重载
运算符重载概念：对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型
加号运算符重载
作用：实现两个自定义数据类型相加的运算
左移运算符重载
作用：可以输出自定义数据类型
重载左移运算符配合友元可以实现输出自定义数据类型


*/

#include <iostream>
using namespace std;

class Person
{
	friend ostream& operator<<(ostream &cout, Person &p);
private:
	int m_A;
	int m_B;
public:
	Person()
	{
		m_A = 10;
		m_B = 10;
	}
	//成员函数重载加号运算符
	Person operator+ (Person &p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
};

////全局函数重载加号运算符
//Person operator+ (Person &p1, Person &p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//全局函数重载左移运算符
ostream& operator<<(ostream &cout, Person& p)
{
	cout << "A = " << p.m_A << "	B = " << p.m_B ;
	return cout;
}

void test()
{
	Person p1;
	Person p2;
	//调用+运算符
	Person p3 = p1 + p2;
	//调用<<运算符
	cout << p3 << endl;
}

int main()
{
	test();

	system("pause");
	return 0;
}