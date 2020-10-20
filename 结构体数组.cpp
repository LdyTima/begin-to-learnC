/*
结构体数组
将自定义的结构体放入到数组中方便维护
语法： struct 结构体名 数组名[元素个数] = { {}，{}，...{}}

结构体中const使用场景
作用：用const来防止误操作
*/

#include <iostream>
using namespace std;
#include <string>
//定义结构体
struct student
{
	string name;
	int age;
	int score;
};
void printstudent(const student stu[])//加const防止函数体中的误操作
{
	//遍历结构体数组
	//stu[0].age = 100;   错误，有const修饰
	for (int i = 0; i < 2; i++)
	{
		cout << "姓名：" << stu[i].name << "年龄：" << stu[i].age << "分数：" << stu[i].score << endl;
	}
}

int main()
{
	student stu[2]
	{
		{"李东岳", 21 ,100},
		{"赵宏磊",21,100}
	};

	//调用输出函数

	printstudent(stu);

	system("pause");
	return 0;

}
