/*
普通函数与函数模板的调用规则

调用规则如下：
1. 如果函数模板和普通函数都可以实现，优先调用普通函数
2. 可以通过空模板参数列表来强制调用函数模板
3. 函数模板也可以发生重载
4. 如果函数模板可以产生更好的匹配,优先调用函数模板

注意：既然提供了函数模板，最好就不要提供普通函数，否则容易出现二义性

*/
#include <iostream>
using namespace std;
template<typename T>
void disp1(int  a, int  b)
{
	cout << "普通函数调用" << endl;
}
template<typename T>
void disp1(T a, T b)
{
	cout << "函数模板调用" << endl;
}
template<typename T>
void disp1(T a, T b, T c)
{
	cout << "函数重载模板的调用" << endl;
}
void test()
{
	int a = 10;
	int b = 20;
	disp1(a, b);
	disp1<>(a, b);
	int c = 30;
	disp1(a, b, c);
	char c1 = 'a';
	char c2 = 'b';
	disp1(c1, c2);
}
int main()
{
	test();
	system("pause");
	return 0;
}