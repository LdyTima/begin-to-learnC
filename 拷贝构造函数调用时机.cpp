/*
拷贝构造函数调用时机
C++中拷贝构造函数调用时机通常有三种情况

1.使用一个已经创建完毕的对象来初始化一个新对象
2.值传递的方式给函数参数传值
3.以值方式返回局部对象

*/
#include <iostream>
using namespace std;
class Person
{
public:
	//无参构造函数
	Person()
	{
		cout << "Person 的无参构造函数调用" << endl;
	}
	//有参构造函数
	Person(int p)
	{
		cout << "Person 的有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person &p)
	{
		cout << "Person 的拷贝构造函数调用" << endl;
	}
	//析构函数
	~Person()
	{
		cout << "Person 的析构函数调用" << endl;
	}

};
void test01()
{
	Person man(10);//调用有参构造函数
	Person neman(man);//调用拷贝构造函数

}
void dowork(Person p)
{

}
void test02()
{
	Person p; //调用无参构造函数
	dowork(p);
}

Person test03()
{
	Person p1;//调用无参构造函数
	return p1;
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}