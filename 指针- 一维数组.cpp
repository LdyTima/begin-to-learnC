/*
指针与数组
作用：利用指针访问数组中元素
指针与一维数组
1.数组的指针即是整个数组在内存中的起始地址
2.数组名代表数组存储的首地址

*/
/*
#include <iostream>
using namespace std;
int main()
{
	//定义数组
	int str[] = { 1,2,3,4,5,6,7,8,9,10 };
	cout <<"查看数组的第一个元素："<< str[0] << endl;
	//定义一个指针变量 使他指向数组
	int *p = str;
	cout << "利用指针查看数组的第一个元素的地址：" << *p << endl;
	int *p1 = str;
	cout << "利用指针输出数组元素：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << *p1 << endl;
		p1++;
	}
	system("pause");
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	
	//1.数组的指针即是整个数组在内存中的起始地址
	int str[10];
	int *p;
	p = str;  //数组名代表数组存储的首地址
	cout << "数组的地址：" << str << endl;
	cout << "通过指针访问数组：" << p << endl;
	system("pause");
	return 0;
}
*/

//案例 -- 输出数组中全部元素
#include <iostream>
using namespace  std;
int main()
{
	/*
	//下标法
	int str[10];
	for (int i = 0; i < 10; i++)
	{
		str[i] = 2 * (i + 1);
		cout << str[i] << "	" ;
	}
	cout << endl;
	*/

	/*
	//通过数组名计算数组元素地址，找出元素的值
	int str[10];
	int *p = str;
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = 2 * (i + 1);
		cout << *( p + i ) << "	";
	}
	*/

	//用指针变量指向数组元素
	int str[10];
	int *p;
	for (int i = 0; i < 10; i++)
	{
		p = &str[i];
		*p = 2 * (i + 1);
		cout << *p << "	";
	}


	system("pause");
	return 0;
}