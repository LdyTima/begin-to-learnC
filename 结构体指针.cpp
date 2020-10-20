/*
结构体指针
作用：通过指针访问结构体中的成员

利用操作符 -> 可以通过结构体指针访问结构体属性

*/

#include <iostream>
using namespace std;
#include <string>
//定义结构体
struct student
{
	string name;  //姓名
	int num;     //学号
	float score; //分数
};
int main()
{
	student s ;
	student *p = &s;
	cout << "请输入姓名 学号 分数：" << endl;
	cin >> s.name >> s.num >> s.score;
	cout << endl;
	for (int i = 0; i < 50; i++)
	{
		cout << "-";
	}
	cout << endl;
	cout << p->name <<"	"<< p->num <<"	"<< p->score << endl;

	system("pause");
	return 0;
}