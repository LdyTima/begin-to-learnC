/*
设计立方体类
设计立方体类(Cube)
求出立方体的面积和体积
分别用全局函数和成员函数判断两个立方体是否相等。
*/
#include <iostream>
using namespace std;
//定义立方体类
class cube
{
private:
	//长
	int m_l;
	//宽
	int m_w;
	//高
	int m_h;


public:

	//写长读长
	void writel(int w_l)
	{
		m_l = w_l;
	}
	int readl()
	{
		return m_l;
	}
	//写宽读宽
	void writew(int w_w)
	{
		m_w = w_w;
	}

	int readw()
	{
		return  m_w;
	}
	//写高读高
	void writeh(int w_h)
	{
		m_h = w_h;
	}
	int readh()
	{
		return m_h;
	}
	//获取面积
	int getarea()
	{
		return ((m_l * m_w) + (m_l * m_h) + (m_w * m_h)) * 2;
	}
	//获取体积
	int getvolt()
	{
		return  m_l * m_w * m_h;
	}
	//成员函数定义比较函数体
	void bijiao(cube cu2)
	{
		if (m_l == cu2.readl() && m_w == cu2.readw() && m_h == cu2.readh())
		{
			cout << "立方体1等于立方体2" << endl;
		}
		else
		{
			cout << "立方体1不等于立方体2" << endl;
		}
	}
};
//全局函数定义比较函数体
void bijiao(cube &cu1, cube &cu2)
{
	if (cu1.readl() == cu2.readl() && cu1.readw() == cu2.readw() && cu1.readh() == cu2.readh())
	{
		cout << "立方体1等于立方体2" << endl;
	}
	else
	{
		cout << "立方体1不等于立方体2" << endl;
	}
}
int main()
{
	int w_l, w_w, w_h;
	//实例化立方体1
	cube cu1;
	cout << "请输入立方体1长：";
	cin >> w_l;
	cu1.writel(w_l);
	cout << "请输入立方体1宽：";
	cin >> w_w;
	cu1.writew(w_w);
	cout << "请输入立方体1高：";
	cin >> w_h;
	cu1.writeh(w_h);

	cout << "立方体1 的面积为：" << cu1.getarea() << endl;
	cout << "立方体1 的体积为：" << cu1.getvolt() << endl;

	//实例化立方体2

	cube cu2;
	cout << "请输入立方体2长：";
	cin >> w_l;
	cu2.writel(w_l);
	cout << "请输入立方体2宽：";
	cin >> w_w;
	cu2.writew(w_w);
	cout << "请输入立方体2高：";
	cin >> w_h;
	cu2.writeh(w_h);

	cout << "立方体2 的面积为：" << cu2.getarea() << endl;
	cout << "立方体2 的体积为：" << cu2.getvolt() << endl;

	cout << endl;
	//比较立方体大小
	bijiao(cu1, cu2);

	system("pause");
	return 0;
}