/* ******************************************************************
						指针———const修饰指针
1.const修饰指针 -- 常量指针
语法:const int *p = &a ;
注意:指针的指向可以修改，但是指针指向的值不可以修改。
2.const修饰常量 -- 指针常量
语法:int * const p = &a ;
注意:指针指向的值可以修改，但是指针的指向不可以修改。
3.const既修饰指针又修饰常量
语法:const int * const p = &a ;
注意:指针的指向不可以修改，指针所指向的值也不可以修改。
********************************************************************* */
#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;
	/*
	//1.const修饰指针 -- 常量指针
	const int *p = &a; 
	p = &b;
	*/
	/*
	//2.const修饰常量 -- 指针常量
	int * const p = &a;
	*p = 20;
	*/
	/*
	//3.const既修饰指针又修饰常量
	const int * const p = &a;
	*p = 10;   //错误
	p = &b;    //错误
	*/

	system("pause");
	return 0;
}