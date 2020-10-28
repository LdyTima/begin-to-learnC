/*
构造函数的分类及调用
两种分类方式：
	按参数分为： 有参构造和无参构造
​	按类型分为： 普通构造和拷贝构造

三种调用方式：
​	括号法
​	显示法
​	隐式转换法
*/

#include <iostream>
using namespace std;
class Person
{
public:
	int age;
	//构造函数
	Person()
	{
		cout << "Person 无参构造函数的调用" << endl;
	}
	Person(int a)
	{
		age = 10;
		cout << "Person 有参构造函数的调用" << endl;
	}
	//拷贝构造函数
	Person(const Person &p)
	{
		cout << "Person 拷贝构造函数的调用" << endl;
		age = p.age;
	}
	//析构函数
	~Person()
	{
		cout << "Person 析构函数的调用" << endl;
	}
};
//调用
void test01()
{
	/*
	//1.括号法
	Person p1;//默认构造函数的引用
	Person p2(10);//有参构造函数
	Person p3(p2);//拷贝构造函数
	cout << "p2年龄：" << p2.age << endl;
	cout << "p3年龄：" << p3.age << endl;
	//注意：
	//调用无参构造函数不能加括号  加了编译器会认为这是一个函数声明
	//Person p1();
	*/
	//2.显示法
	Person p1;
	Person p2 = Person(10);//有参构造函数
	Person p3 = Person(p2);//调用拷贝函数
	cout << "p2年龄：" << p2.age << endl;
	cout << "p3年龄：" << p3.age << endl;
	//注意： 
	//Person(10); 匿名对象 特定：当前行执行结束后，系统会立即回收掉匿名对象
	//Person(p3);不要利用拷贝构造函数初始化匿名对象  编译器会认为Person(p3) == Person p3; 对象重定义.

	//3.隐式转换法
	Person p4 = 10; //相当于写了 Person p4 = Person (10); 有参构造
	Person p5 = p4; // 拷贝构造
}
int main()
{

	test01();
	
	system("pause");
	return 0;
}