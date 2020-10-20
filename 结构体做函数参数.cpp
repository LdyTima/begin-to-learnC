/*
结构体做函数参数
作用：将结构体作为参数向函数中传递
传递方式：
值传递：不会改变实参
地址传递：会改变实参（实参和形参公用一个内存空间）
*/

#include <iostream>
using namespace std;
#include <string>

//定义一个结构体变量
struct student
{
	string name; //姓名
	int num; //年龄
	float score; //分数
};
//定义函数体
//值传递
void printStudent1(struct student s)
{
	cout << "函数体中显示：" << "姓名：" << s.name << "	" << "年龄：" << s.num << "	" << "分数：" << s.score << endl;
}
//地址传递
void printStudent2(struct student *s)
{
	s->name = "李东岳";
	cout << "函数体中显示：" << "姓名：" << s->name << "	" << "年龄：" << s->num << "	" << "分数：" << s->score << endl;
}
int main()
{
	student s;
	s.name = "赵宏磊";
	s.num = 21;
	s.score = 100;
	printStudent1(s);
	printStudent2(&s);
	cout <<"主函数中显示："<< "姓名：" << s.name << "	" << "年龄：" << s.num << "	" << "分数：" << s.score << endl;

	system("pause");
	return 0;
}