/* ******************************************************************
                            switch语句
作用：执行多条件分支语句
语法：
		switch(表达式)
		{
		   case 结果1 ： 执行语句 ；break ； 
		   
		   case 结果2 :  执行语句 ; break;

		   ...

		   default : 执行语句 ; break ;
		}

********************************************************************* */
//给电影进行打分
//10 ~ 9 经典
//8 ~ 7 非常好
//6 ~ 5 一般
//5以下 烂片
/* *********************************************************************************
#include <iostream>
using namespace std;
int main()
{
	//输入分数
	int socre;
	cout << "请给电影进行打分 ：";
	cin >> socre;
	switch (socre)
	{
	case 10:
	case 9: cout << "您对该影片的评价为--经典" << endl; break;
	case 8:
	case 7: cout << "您对该影片的评价为--非常好" << endl; break;
	case 6:
	case 5: cout << "您对该影片的评价为--一般" << endl; break;
	default:cout << "您对该影片的评价为--烂片" << endl; break;
			
	}
	system("pause");
	return 0;
}
******************************************************************************* */
//输入一个百分制成绩，转换成"优"、"良"、"中"、"及格"、"不及格"的五级制输出。
/* ******************************************************************************
#include<iostream>
using namespace std;
int main()
{
	//输入分数
	int socre;
	cout << "请输入分数 = ";
	cin >> socre;
	if (socre < 0 || socre > 100)
	{
		cout << "输入的分数有错误" << endl;
		exit(1);
	}
	else
	{
		switch (socre / 10)
		{
		case 10:
		case 9:cout << "您的成绩是-	优" << endl; break;
		case 8:cout << "您的成绩是-	良" << endl; break;
		case 7:cout << "您的成绩是-	中" << endl; break;
		case 6:cout << "您的成绩是-	及格" << endl; break;
		default:cout << "您的成绩是-	不及格" << endl; break;

		}
	}
	system("pause");
	return 0;
}
*********************************************************************************** */

