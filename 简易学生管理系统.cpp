//实例----简易学生管理系统（初次练习）
//
#include<iostream>
using namespace std;
enum sport         //定义枚举类型-体育成绩 优秀 良好 中等 及格 不及格
{
	excellence,
	good,
	middle,
	pass,
	failure
};
struct date        //定义结构体-年 月 日
{
	int year;
	int month;
	int day;
};
struct student     // 定义结构体-学生基本信息
{
	char name[8];    //姓名
	long long  num;        //学号
	bool sex;        //性别
	date birth;      //出生日期
	float culture;   //文化课成绩
	float specialty; //专业课成绩
	sport sports;    //体育课成绩
};
int main()
{
	student st1, st2;   //声名两个结构体变量             
	cout << "输入信息：" << endl;
	cout << "	姓名：" ;
	cin >> st1.name;        //在结构体中寻找 char name
	cout << "	学号: " ;
	cin >> st1.num;         //在结构体中寻找long long num
	
	// 对于bool型变量 不能直接进行输出  对bool类型进行变换
	cout << "	男(1)女(0)：" ;    
	int temp;
	cin >> temp;
	st1.sex = (temp != 0 ? true : false);   
	
	cout << "	出生日期:" ;
	cin >> st1.birth.year >> st1.birth.month >> st1.birth.day;
	cout << "	文化课成绩：" ;
	cin >> st1.culture;
	cout << "	专业课成绩：" ;
	cin >> st1.specialty;
	
	// 对于enum型变量也不能直接进行输入/输出  需要对枚举型进行变换
	cout << "	体育课成绩(0:优秀,1:优良;2:中等;3:及格;4:不及格)：";
	cin >> temp;
	st1.sports = (temp == 0 ? excellence : (temp == 1 ? good : (temp == 2 ? middle : (temp == 3 ? pass : failure))));

	st2 = st1;
	cout << "输出结果：" << endl;
	cout << "	姓名：" << st2.name << endl;
	cout << "	学号: " << st2.num << endl;
	cout << "	性别：" << (st2.sex == true ? "男":"女") << endl;   //由于st1中已经判断出 输入1（0）-输出ture（false）; 在st2中判断st1输出的是 ture-男；否则（false）- 女。
	cout << "	生日：" << st2.birth.year<<"-"<< st2.birth.month<<"-"<<st2.birth.day << endl;
	cout << "	文化课成绩：" << st2.culture << endl;
	cout << "	专业课成绩：" << st2.specialty << endl;
	cout << "	体育课成绩：" << (st2.sports == excellence ? "优秀" : (st2.sports == good ? "良好" : (st2.sports == middle ? "中等" : (st2.sports == pass ? "及格" : (st2.sports == failure ? "不及格" : "错误"))))) << endl;

	//由于st1中已经判断出 输入0-输出excellence; 在st2中判断st1输出的是 excellence-优秀；


}