/*
多态案例一-计算器类
案例描述：
分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类
多态的优点：
代码组织结构清晰
可读性强
利于前期和后期的扩展以及维护
*/

/*
//普通写法
#include <iostream>
#include<string>
using namespace std;
class computer
{
private:
	int m_num1;
	int m_num2;
public:
	void func(int a, int b)
	{
		m_num1 = a;
		m_num2 = b;
	}
	int oper(string sign)
	{
		if (sign == "+")
		{
			return m_num1 + m_num2;
		}
		else if (sign == "-")
		{
			return m_num1 - m_num2;
		}
		else if (sign == "*")
		{
			return m_num1 * m_num2;
		}
	}
};
void test()
{
	int a, b;
	string sign;
	computer com1;
	cout << "请输入数值a = ";
	cin >> a;
	cout << "请输入数值b = ";
	cin >> b;
	cout << "请输入运算符 + - * ：";
	cin >> sign;
	com1.func(a, b);
	cout << a << sign << b << "=" << com1.oper(sign) << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}
*/

//多态写法
#include <iostream>
#include<string>
using namespace std;
class computer
{
public:
	int m_num1;
	int m_num2;

	virtual int oper() = 0;
};
//加法
class add :public computer
{
public:
	int oper()
	{
		return m_num1 + m_num2;
	}
};
//减法
class cod :public computer
{
public:
	int oper()
	{
		return m_num1 - m_num2;
	}
};
//乘法
class cheng :public computer
{
public:
	int oper()
	{
		return m_num1 * m_num2;
	}
};
void test()
{
	computer *abc = NULL;
	string sign;
	cout << "请输入运算符 + - * ：";
	cin >> sign;
	if (sign == "+")
	{
		//加法实现
		abc = new add;
		cout << "请输入数值a = ";
		cin >> abc->m_num1;
		cout << "请输入数值b = ";
		cin >> abc->m_num2;
		cout << abc->m_num1 << sign << abc->m_num2 << "=" << abc->oper() << endl;
		delete abc;
	}
	else if (sign == "-")
	{
		//减法实现
		abc = new cod;

		cout << abc->m_num1 << sign << abc->m_num2 << "=" << abc->oper() << endl;
		delete abc;
	}
	else if (sign == "*")
	{
		//乘法实现
		abc = new cheng;
		cout << "请输入数值a = ";
		cin >> abc->m_num1;
		cout << "请输入数值b = ";
		cin >> abc->m_num2;
		cout << abc->m_num1 << sign << abc->m_num2 << "=" << abc->oper() << endl;
		delete abc;
	}
}
int main()
{
	test();
	system("pause");
	return 0;
}