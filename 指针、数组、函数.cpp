/*
指针、数组、函数
案例描述：封装一个函数，利用冒泡排序，实现对整型数组的升序排序
例如数组：int arr[10] = {4,3,6,9,1,2,10,8,7,5};
*/
#include <iostream>
using namespace std;
void maopao(int *arr, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	cout << "排序前：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "	";
	}
	cout << endl;
	maopao(arr,10);
	cout << "排序后:" << endl;
	for (int j = 0; j < 10; j++)
	{
		cout << arr[j] << "	";
	}

	system("pause");
	return 0;
}