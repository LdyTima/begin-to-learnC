/*
数组案例2
1.冒泡排序
*/

//1.冒泡排序
/*
#include<iostream>
using namespace std;
int main()
{
	//创建数组
	int a[10];
	int n;
	cout << "输入十个数：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	//轮次
	for (int j = 0; j < 10 - 1; j++)
	{
		for (int k = 0; k < 10 - j - 1; k++)
		{
			if (a[k] > a[k + 1])
			{
				n = a[k];
				a[k] = a[k + 1];
				a[k + 1] = n;
			}
		}
	}
	cout << "排序后 = ";
	for (int z = 0; z < 10; z++)
	{
		cout << a[z]<<" ";
	}

	int low;
	int hight;
	int mid;
	int x;
	cout << "请输入想要找的数据：";
	cin >> x;
		low = 0;
		hight = 9;
		mid = (low + hight) / 2;
		while (x != a[mid] && low < hight)
		{
			if (x < a[mid])
			{
				hight = mid - 1;
			}
			else
			{
				low = mid + 1;
			}
			mid = (hight + low) / 2;
		}
		if (low <= hight)
		{
			cout << "恭喜你查找成功，在数组中的下标为：" << a[mid] << endl;
		}
		else
		{
			cout << "没事找到您输入的数据" << endl;
		}
}
*/



