/*
多态案例二-制作饮品
案例描述：
制作饮品的大致流程为：煮水 -  冲泡 - 倒入杯中 - 加入辅料
利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶
*/
#include <iostream>
using namespace std;
class yinpin
{
public:
	//抽象煮水
	virtual void zhushui() = 0;
	//抽象冲泡
	virtual void chongpao() = 0;
	//抽象倒水
	virtual void daoshui() = 0;
	//抽象加料
	virtual void jialiao() = 0;
	//输出
	void makedrink()
	{
		 zhushui();
		 chongpao();
		 daoshui();
		 jialiao();
	}
};

//茶
class tea:public yinpin
{
	virtual void zhushui()
	{
		cout << "煮茶水" << endl;
	}
	virtual void chongpao()
	{
		cout << "冲泡茶叶" << endl;
	}
	virtual void daoshui()
	{
		cout << "倒入茶水" << endl;
	}
	virtual void jialiao()
	{
		cout << "加入茶叶" << endl;
	}
};

//咖啡
class coffic:public yinpin
{
	virtual void zhushui()
	{
		cout << "煮水" << endl;
	}
	virtual void chongpao()
	{
		cout << "冲泡咖啡" << endl;
	}
	virtual void daoshui()
	{
		cout << "倒入咖啡" << endl;
	}
	virtual void jialiao()
	{
		cout << "加入糖和牛奶" << endl;
	}
};

void dowork(yinpin *drink)
{
	drink->makedrink();
	delete drink;
}

void test()
{
	dowork(new tea);
	cout << "--------------" << endl;
	dowork(new coffic);

}
int main()
{
	test();
	system("pause");
	return 0;
}