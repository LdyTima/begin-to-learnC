/*
多态案例三-电脑组装
案例描述：
电脑主要组成部件为 CPU（用于计算），显卡（用于显示），内存条（用于存储）
将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如Intel厂商和Lenovo厂商
创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
测试时组装三台不同的电脑进行工作
*/
#include <iostream>
#include <string>
using namespace std;
//CPU抽象类
class CPU
{
public:
	virtual void calculate() = 0;
};
//显卡抽象类
class videocard
{
public:
	virtual void display() = 0;
};
//内存条抽象类
class memary
{
public:
	virtual void storage() = 0;
};
//Intel类
class IntelCpu : public CPU
{
public:
	void calculate()
	{
		cout << "Intel 的cpu开始工作了" << endl;
	}
};
class Intelvideocard : public videocard
{
public:
	void display()
	{
		cout << "Intel 的显卡开始工作了" << endl;
	}
};
class Intelmemary : public memary
{
public:
	void storage()
	{
		cout << "Intel 的内存条开始工作了" << endl;
	}
};
//Lenovo类
class LenovoCpu : public CPU
{
public:
	void calculate()
	{
		cout << "Lenovo 的cpu开始工作了" << endl;
	}
};
class Lenovovideocard : public videocard
{
public:
	void display()
	{
		cout << "Lenovo 的显卡开始工作了" << endl;
	}
};
class Lenovomemary : public memary
{
public:
	void storage()
	{
		cout << "Lenovo 的内存条开始工作了" << endl;
	}
};

//创建电脑类
class computer
{
private:
	CPU *m_cpu;
	videocard *m_vdc;
	memary *m_mem;
public:
	//构造函数
	computer(CPU *cpu, videocard *vdc, memary *mem)
	{
		m_cpu = cpu;
		m_vdc = vdc;
		m_mem = mem;
	}
	//调用函数接口
	void dowark()
	{
		m_cpu->calculate();
		m_vdc->display();
		m_mem->storage();
	}
	//析构函数
	~computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vdc != NULL)
		{
			delete m_vdc;
			m_vdc = NULL;
		}
		if (m_vdc != NULL)
		{
			delete m_vdc;
			m_vdc = NULL;
		}
	}
};
void test()
{
	//组装电脑1
	computer *computer1 = new computer(new IntelCpu, new Intelvideocard, new Intelmemary);
	computer1->dowark();
	delete computer1;
	cout << "--------------" << endl;
	//组装电脑2
	computer *computer2 = new computer(new LenovoCpu, new Lenovovideocard, new Lenovomemary);
	computer2->dowark();
	delete computer2;
}
int main()
{
	test();
	system("pause");
	return 0;
}