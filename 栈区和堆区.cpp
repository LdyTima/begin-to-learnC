/*
程序运行后

栈区：
​由编译器自动分配释放, 存放函数的参数值,局部变量等
​注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放

堆区:
由程序员分配释放,若程序员不释放,程序结束时由操作系统回收
在C++中主要利用new在堆区开辟内存

*/


#include <iostream>
using namespace std;
int * func(int n)  //函数和形参数据都是放在栈区
{
	n = 100;
	/*
	int a = 10;
	return &a; //返回a的地址
	*/
	int* a = new int(10);  //想要返回地址要将其放入堆区
	return a;
}

int main() {

	int *p = func(1);   //创建一个指针变量p来接收函数返回的地址

	//解指针 输出指针所指向的值.
	cout << *p << endl;  
	cout << *p << endl; 

	system("pause");

	return 0;
}
