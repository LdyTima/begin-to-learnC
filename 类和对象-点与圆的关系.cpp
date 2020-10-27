#include <iostream>
using namespace std;
const double PI = 3.14;
//#include "point.h"
//#include "circle.h"

//定义一个点类
class Point
{
private:
	int m_X;//X坐标
	int m_Y;//Y坐标
public:
	//写坐标
	void writeX(int w_X)
	{
		m_X = w_X;
	}
	void writeY(int w_Y)
	{
		m_Y = w_Y;
	}
	//读坐标
	int readX()
	{
		return m_X;
	}
	int readY()
	{
		return m_Y;
	}
};

//定义一个圆类
class Circle
{
private:
	int m_R;//半径
	Point m_center;//圆心
public:
	//写圆心
	void writeCenter(Point center)
	{
		m_center = center;
	}
	//读取圆心
	Point readCenter()
	{
		return m_center;
	}

	//写半径
	void writeR(int w_R)
	{
		m_R = w_R;
	}
	//读取半径
	int readR()
	{
		return m_R;
	}
};
//定义点到直线距离全局函数
//定义判断点和圆关系
void isInCircle(Circle &c, Point &p)
{
	//计算两点之间距离
	int pdistance = (c.readCenter().readX() - p.readX()) * (c.readCenter().readX() - p.readX()) + (c.readCenter().readY() - p.readY()) * (c.readCenter().readY() - p.readY());
	int rdistance = c.readR() * c.readR();

	if (pdistance == rdistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (pdistance > rdistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}
int main()
{
	//实例化一个圆
	Circle c;
	//设置半径
	c.writeR(10);
	//设置圆心
	Point center;
	center.writeX(10);
	center.writeY(0);
	c.writeCenter(center);

	//实例化一个点
	Point p;
	p.writeX(10);
	p.writeY(10);

	isInCircle(c, p);

}
