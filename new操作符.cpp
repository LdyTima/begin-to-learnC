/*
new操作符

C++中利用new操作符在堆区开辟数据
堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符 delete 

语法：指针类型 *指针变量名 =  new 数据类型（参数值）

利用new创建的数据，会返回该数据对应的类型的指针

语法：指针类型 *指针变量名 =  new 数组类型[]
*/

#include <iostream>
using namespace std;
#include <string>
//定义学生结构体
struct student
{
	//姓名
	string name;
	//学号
	string num;
	//学校
	string school;
};
//定义显示函数
void printf(int n)
{
	//语法：指针类型 *指针变量名 = new 数组类型[]
	struct student *p = new student[n]; //用new操作符可以 动态定义数组大小
	//输入信息
	for (int i = 0; i < n; i++)
	{
		cout << "请输入学生姓名：" ;
		cin >> p->name;
		cout << "请输入学生学号：" ;
		cin >> p->num;
		cout << "请输入学生学校：" ;
		cin >> p->school;
		cout << endl;
	}
	cout << endl;
	//输出信息
	for (int i = 0; i < n; i++)
	{
		cout << "	姓名：" << p->name << "	学号：" << p->num << "	 学校：" << p->school << endl;
	}
	cout << endl;
}

int* func()
{
	//语法：指针类型 *指针变量名 =  new 数据类型（参数值）
	int* a = new int(10);
	return a;
}
int main()
{
	struct student;
	int n;
	cout << "请输入想要输入学生的个数：";
	cin >> n;
	printf(n); //调用函数
	int *p = func();
	cout << *p << endl;
	
}