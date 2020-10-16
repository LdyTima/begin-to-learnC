//输入学生数量 姓名 学号 成绩 并对学生按照成绩进行升序排序

#include<iostream>
using namespace std;
int n;
//定义学生的结构体
struct student
{
	long long num;
	char name[10];
	float score;
};
student stu[];
int main()
{
	student stu[3];
	cout << "请输入学生个数最多3人：";
	cin >> n;
	if (n > 3 || n < 0)
	{
		cout << "您输入的学生数量有误" << endl;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			cout << "请输入 姓名 学号 成绩：" << endl;
			cin >> stu[i].name >> stu[i].num >> stu[i].score ;
		}
		void maopao(student stu[3], int n); //声明冒泡排序
		cout << "****************排序后****************" << endl;
		cout <<" 姓名"<<'	'<<"   学号"<<'	'<<'	'<<"成绩" << endl;
		for (int j = 0; j < n; j++)
		{

			cout << stu[j].name <<"	"<< stu[j].num <<"	"<< stu[j].score <<"	"<< endl;;
		}

	}
	system("pause");
	return 0;
}

//定义冒泡排序
void maopao(student stu[], int n)
{
	int temp;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (stu[j].score > stu[j + 1].score)
			{
				temp = stu[j].score;
				stu[j].score = stu[j + 1].score;
				stu[j + 1].score = temp;
			}
		}
	}
}