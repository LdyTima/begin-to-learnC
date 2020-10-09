#include<iostream.h>
void main()
{
	const double PI = 3.1415926535898;
	double radius;
	double arear;
	double circumference;
	cout <<"输入半径：";
	cin >> radius;
	arear = PI*radius*radius;
	circumference = 2.0*PI*radius;
	cout << "圆面积为：" << arear << endl;
	cout << "圆的周长：" << circumference << endl;
}