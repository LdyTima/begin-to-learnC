/*
深拷贝与浅拷贝

浅拷贝：简单的赋值拷贝操作
深拷贝：在堆区重新申请空间，进行拷贝操作

*/
#include <iostream>
using namespace std;
class Person
{
public:
	//属性
	int m_age;
	int *m_height;
	//构造函数
	Person()
	{
		cout << "默认构造函数" << endl;
	}
	//有参构造函数
	Person( int age , int height)
	{
		cout << "有参构造函数" << endl;
		m_age = age;
		m_height = new int(height);
	}
	//拷贝构造函数
	Person(const Person &p)
	{
		cout << "拷贝构造函数" << endl;
		m_age = p.m_age;//编译器简单赋值
		//编译器浅拷贝操作
		//m_hight = p.m_height；
		//如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题
		m_height = new int(*p.m_height);
	}
	//析构函数
	~Person()
	{
		cout << "析构函数" << endl;
		if (m_height != NULL)
		{
			delete m_height;
		}
	}
};

void test01()
{
	Person p(21 , 175);
	cout << "p的年龄：" << p.m_age << "	p的身高：" << p.m_height << endl;
	Person copy(p);
	cout << "copy的年龄：" << p.m_age << "	copy的身高：" << p.m_height << endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}