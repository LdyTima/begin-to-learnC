/*
通讯录是一个可以记录亲人、好友信息的工具。
本教程主要利用C++来实现一个通讯录管理系统
系统中需要实现的功能如下：

* 添加联系人：向通讯录中添加新人，信息包括（姓名、性别、年龄、联系电话、家庭住址）最多记录1000人
* 显示联系人：显示通讯录中所有联系人信息
* 删除联系人：按照姓名进行删除指定联系人
* 查找联系人：按照姓名查看指定联系人信息
* 修改联系人：按照姓名重新修改指定联系人
* 清空联系人：清空通讯录中所有信息
* 退出通讯录：退出当前使用的通讯录

*/
#include <iostream>
using namespace std;
#include <string>
#define  MAX  1000
//定义主菜单函数体
void Menu()
{
	cout << "***********主菜单**********" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}
//定义联系人结构体
struct people
{
	//姓名
	string name;
	//性别
	string sex;
	//年龄
	int age;
	//联系电话
	string phone;
	//家庭住址
	string address;
};
//定义通讯录结构体
struct Addressbooks
{
	struct people peopleArray[MAX]; //通讯录中保存的联系人数组
	int sum;//通讯录中人数
};

//定义添加联系人函数体
void addpeople(struct Addressbooks *abs )
{
	if (abs->sum == MAX)
	{
		cout << "联系人已满，无法添加!" << endl;
		return;
	}
	else
	{
		//输入姓名
		cout << "请输入姓名：" << endl;
		string  name;
		cin >> name;
		abs->peopleArray[abs->sum].name = name;
		//输入性别
		cout << "请输入性别：" << endl;
		string sex;
		cin>> sex;
		abs->peopleArray[abs->sum].sex = sex;
		//输入年龄
		cout << "请输入年龄：" << endl;
		int age;
		cin >> age;
		abs->peopleArray[abs->sum].age = age;
		//输入联系电话
		cout << "请输入联系电话：" << endl;
		string phone;
		cin >> phone;
		abs->peopleArray[abs->sum].phone = phone;
		//输入家庭住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		abs->peopleArray[abs->sum].address = address;

		//通讯录人数加一
		abs->sum++;
		cout << "添加成功" << endl;
		system("pause");
		system("cls");

	}
}
//定义显示联系人函数体
void dispeople(Addressbooks *abs)
{
	if (abs->sum == 0)
	{
		cout << "无联系人" << endl;
	}
	else
	{
		cout <<"序号"<<"	姓名" << "	性别" << "	年龄" << "	联系方式" << "	家庭地址" << endl;
		for (int i = 0; i < abs->sum; i++)
		{
			cout << i << "	" << abs->peopleArray[i].name << "	" << abs->peopleArray[i].sex << "	" << abs->peopleArray[i].age << "	" << abs->peopleArray[i].phone << "	" << abs->peopleArray[i].address << endl;
		}
	}
	system("pause");
	system("cls");
}

int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;
	//创建通讯录初始化联系人
	abs.sum = 0;
	//定义菜单选择系统
	int a = 0;
	while (true)
	{
		Menu();

		cout << "请输入您要执行的操作：" << endl;
		cin >> a;

		switch (a)
		{
			case 0:
				cout << "欢迎下次使用" << endl;
				system("pause"); 
				return 0;
				break;
			case 1:addpeople(&abs); break;
			case 2:dispeople(&abs); break;
			case 3: break;
			case 4: break;
			case 5: break;
			case 6: break;
			default:break;
		}
	}
	system("pause");
	return 0;
}