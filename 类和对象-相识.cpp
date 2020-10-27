/*
类在设计时，可以把属性和行为放在不同的权限下，加以控制
访问权限有三种：
公共权限  public     类内可以访问  类外可以访问
保护权限  protected  类内可以访问  类外不可以访问
私有权限  private    类内可以访问  类外不可以访问

struct和class区别

在C++中 struct和class唯一的区别就在于默认的访问权限不同

区别：
struct  默认权限为公共
class   默认权限为私有

成员属性设置为私有
优点1：将所有成员属性设置为私有，可以自己控制读写权限
优点2：对于写权限，我们可以检测数据的有效性
*/

#include <iostream>
using namespace std;
#include <string>
class lei
{
public:
	//写姓名
	void writename(string name)
	{
		lei_name = name;
	}
	//读姓名
	string redname()
	{
		return lei_name;
	}

	//写年龄
	void writeage(int age)
	{
		if (age < 0 || age>100)
		{
			cout << "年龄输入有误" << endl;
		}
		lei_age = age;
	}
	//读年龄
	int redage()
	{
		return lei_age;
	}
	//访问权限
private:
	//姓名
	string lei_name;
	//年龄
	int lei_age;

};
int main()
{
	//实例化一个人
	lei people;

	people.writename ("赵宏磊");//	写姓名
	cout << "姓名：" << people.redname() << endl;//读姓名

	people.writeage(21);
	cout << "年龄：" << people.redage() << endl;

	system("pause");
	return 0;
}
