/*
C++面向对象的三大特性为：封装、继承、多态
C++认为万事万物都皆为对象，对象上有其属性和行为

例如：
​人可以作为对象，属性有姓名、年龄、身高、体重...，行为有走、跑、跳、吃饭、唱歌...
​车也可以作为对象，属性有轮胎、方向盘、车灯...,行为有载人、放音乐、放空调...

​具有相同性质的对象，我们可以抽象称为类，人属于人类，车属于车类

类中的属性和行为统一称为 成员
属性：  成员属性  成员变量
行为：  成员函数  成员方法
*/

//设计一个圆类，求圆的周长和面积
#include <iostream>
using namespace std;
const double pi = 3.14;
class circle
{
	//访问权限
public:
	//属性
	int r; //圆的半径
	//行为
	//周长：
	void c()
	{
		double c = 2 * pi *r;
		cout << "周长：" << c << endl;
	}
	//面积
	void s()
	{
		double s = pi * r*r;
		cout << "面积：" << s << endl;
	}


};
int main()
{
	//实例化一个圆
	circle c1;
	cout << "请输入半径：" << endl;
	cin >> c1.r;
	//周长
	c1.c();
	//面积
	c1.s();
	system("pause");
	return 0;
}



/*
//设计一个学生类，能够输入信息，显示信息
#include <iostream>
using namespace std;
#include <string>
//定义一个学生类
class student
{
	//访问权限
public:
	//属性
	string name;//姓名
	string num;//学号
	//行为
	void set()
	{
		cout << "输入学生姓名：" << endl;
		cin >> name;
		cout << "输入学生学号：" << endl;
		cin >> num;
	}
	void show()
	{
		cout << "姓名：" << name << "	学号：" << num << endl;
	}
};
int main()
{
	//实例化一个学生
	student s1;
	//输入学生信息
	s1.set();
	//显示学生信息
	s1.show();

	system("pause");
	return 0;
}
*/