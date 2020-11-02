/*
多态
多态是C++面向对象三大特性之一
多态分为两类
静态多态: 函数重载 和 运算符重载属于静态多态，复用函数名
动态多态: 派生类和虚函数实现运行时多态

静态多态和动态多态区别：
静态多态的函数地址早绑定  -  编译阶段确定函数地址
动态多态的函数地址晚绑定  -  运行阶段确定函数地址

我们希望传入什么对象，那么就调用什么对象的函数
如果函数地址在编译阶段就能确定，那么静态联编
如果函数地址在运行阶段才能确定，就是动态联编
多态满足条件
有继承关系
子类重写父类中的虚函数
多态使用条件
父类指针或引用指向子类对象
重写：函数返回值类型  函数名 参数列表 完全一致称为重写
*/
#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "喵喵喵" << endl;
	}
};

class Dog :public Animal
{
public:

	void speak()
	{
		cout << "汪汪汪" << endl;
	}

};

void DoSpeak(Animal & animal)
{
	animal.speak();
}

void test()
{
	Cat cat;
	DoSpeak(cat);


	Dog dog;
	DoSpeak(dog);
}


int main() 
{

	test();

	system("pause");

	return 0;
}