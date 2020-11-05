/*
案例描述：

利用函数模板封装一个排序的函数，可以对 不同数据类型数组 进行排序
排序规则从大到小，排序算法为 选择排序 
分别利用 char数组 和 int数组 进行测试

*/
#include <iostream>
using namespace std;
//交换模板
template<typename T>
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
//排序模板
template<typename T>
void paixu(T arr[] , int len )
{
	for (int i = 0; i < len; i++)
	{
		int max = i;  //假设排头是最大值
		for (int j = i+1; j < len ; j++)
		{
			if (arr[max]<arr[j]) 
			{
				max =  j;    //记录最大数
			}
		}
		if (i != max)   //证明存在更大的数
		{
			/*	temp = arr[i];
				arr[i] = arr[k];
				arr[k] = temp;*/
			mySwap(arr[i], arr[max]);  //最大数与排头交换
		}
	}
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] <<" ";
	}
	cout << endl;
}


void test()
{
	int arr[] = { 1,3,2,8,6,5,9,4,7,10 };
	int len = sizeof(arr) / sizeof(int);
	paixu(arr , len);
}
void testo1()
{
	char arr1[] = "acbedgf";
	char len = sizeof(arr1) / sizeof(char);
	paixu(arr1 , len);
}
int main()
{
	test();
	testo1();
	system("pause");
	return 0;
}