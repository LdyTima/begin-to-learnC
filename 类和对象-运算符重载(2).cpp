/*
递增运算符重载
作用： 通过重载递增运算符，实现自己的整型数据

*/
#include <iostream>
using namespace std;
class Myinteger
{
	friend ostream& operator<< (ostream& cout, Myinteger myint);
private:
	int m_Num;
public:
	Myinteger()
	{
		m_Num = 1;
	}
	//定义前置++
	Myinteger& operator--()
	{
		//先加一
		m_Num--;
		//再返回
		return *this;
	}
	//定义后置++
	Myinteger operator--(int)
	{
		//先保存本身
		Myinteger temp = *this;
		//再加一
		m_Num--;
		//再返回本身
		return temp;
	}
};

//重载<<
ostream& operator<< (ostream& cout, Myinteger myint)
{
	cout << myint.m_Num << endl;
	return cout;
}

void test01()
{
	Myinteger myint;
	cout << --myint << endl;
	cout << myint << endl;
}
void test02()
{
	Myinteger myint;
	cout << myint-- << endl;
	cout << myint << endl;
}
int main() {

	test01();
	test02();

	system("pause");

	return 0;
}