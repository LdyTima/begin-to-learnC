/*
友元

在程序里，有些私有属性 也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术
友元的目的就是让一个函数或者类 访问另一个类中私有成员

友元的关键字为 friend

友元的三种实现：
全局函数做友元
类做友元
成员函数做友元

*/

/*
//全局函数做友元
#include <iostream>
using namespace std;
#include <string>
class Building
{
	//告诉编译器 goodGay全局函数 是 Building类的好朋友，可以访问类中的私有内容
	friend void goodGay();
private:
	string m_BedRoom; // 卧室
public:
	string m_SittingRoom; //客厅

	//构造函数 赋初值
	Building()
	{
		m_BedRoom = "卧室";
		m_SittingRoom = "客厅";
	}

};
void goodGay()
{
	Building building;
	cout << "好基友正在访问:" << building.m_SittingRoom << endl;
	cout << "好基友正在访问:" << building.m_BedRoom << endl;
}
int main()
{
	goodGay();
	system("pause");
	return 0;
}
*/
/*
//类做友元
#include <iostream>
using namespace std;
#include <string>

class Building
{
	friend class goodGay;

private:
	string m_BedRoom; // 卧室
public:
	string m_SittingRoom; //客厅

	//构造函数 赋初值
	Building()
	{
		m_BedRoom = "卧室";
		m_SittingRoom = "客厅";
	}
};

class goodGay
{
//private:
//	Building *building;
public:
	 Building building;
	//goodGay()
	//{
	//	building = new Building;
	//}

	void visit()
	{
		cout << "好基友正在访问:" << building.m_SittingRoom << endl;

		cout << "好基友正在访问:" << building.m_BedRoom<< endl;
	}
};

void test()
{
	goodGay gg;
	gg.visit();
}
int main()
{
	test();
	system("pause");
	return 0;
}
*/

//类的成员函数友元
#include <iostream>
using namespace std;
#include <string>
class Building;
class goodGay
{
public:

	goodGay();
	void visit(); //只让visit函数作为Building的好朋友，可以发访问Building中私有内容
	void visit2();

private:
	Building *building;
};


class Building
{
	//告诉编译器  goodGay类中的visit成员函数 是Building好朋友，可以访问私有内容
	friend void goodGay::visit();

public:
	Building();

public:
	string m_SittingRoom; //客厅
private:
	string m_BedRoom;//卧室
};

Building::Building()
{
	this->m_SittingRoom = "客厅";
	this->m_BedRoom = "卧室";
}

goodGay::goodGay()
{
	building = new Building;
}

void goodGay::visit()
{
	cout << "好基友正在访问" << building->m_SittingRoom << endl;
	cout << "好基友正在访问" << building->m_BedRoom << endl;
}

void goodGay::visit2()
{
	cout << "好基友正在访问" << building->m_SittingRoom << endl;
	//cout << "好基友正在访问" << building->m_BedRoom << endl;
}

void test01()
{
	goodGay  gg;
	gg.visit();

}

int main() {

	test01();

	system("pause");
	return 0;
}
```


