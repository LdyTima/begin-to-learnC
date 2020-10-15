/*
数组案例
*/

/*
//案例1--五只小猪称体重
#include <iostream>
using namespace std;
int main()
{
	//创建一个数组，记录五只小猪体重
	int arr[] = { 300,350,200,500,400 };
	//比较出最大的数
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "最重的小猪体重是 ： " << max << endl;
	system("pause");
	return 0;
}
*/
/*
//案例2--数组元素逆置
#include<iostream>
using namespace std;
int main()
{
	//声名五元素数组
	int arr[5] = { 1,2,3,4,5 };
	//将数组元素逆置
	int start = 0; //起始元素下标
	int end = sizeof(arr) / sizeof(arr[0])-1;  //末尾元素下标
	int temp = 0;
	while (start < end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++; end--;
	}
	cout << "逆置后的数据为：";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << '	';
	}
	system("pause");
	return 0;
}
*/

//二维数组案例--考试成绩统计
#include <iostream>
using namespace std;
#include <string>
int main()
{
	//创建数组
	int score[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80},
	};
	string name[] = {"张三	","李四	","王五	" };
	string subject[] = {"语文	","数学	","英语" };
	for (int i = 0; i < 3; i++)
	{
		int sum;
		cout << name[i];
		for (int j = 0; j < 3; j++)
		{
			cout <<score[i][j]<<'	' ;
		}
		cout << endl;
		
	}

	system("pause");
	return 0;
}

