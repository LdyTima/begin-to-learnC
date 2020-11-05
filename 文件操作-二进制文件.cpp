/*
文件操作
程序运行时产生的数据都属于临时数据，程序一旦运行结束都会被释放
通过文件可以将数据持久化
C++中对文件操作需要包含头文件 < fstream >

文件类型分为两种：

1. 文本文件 - 文件以文本的ASCII码形式存储在计算机中
2. 二进制文件 - 文件以文本的二进制形式存储在计算机中，用户一般不能直接读懂它们
操作文件的三大类:

1. ofstream：写操作
2. ifstream： 读操作
3. fstream ： 读写操作

二进制文件
以二进制的方式对文件进行读写操作
打开方式要指定为 ios::binary

写文件

二进制方式写文件主要利用流对象调用成员函数write
函数原型 ：ostream& write(const char * buffer,int len);
参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数

读文件

二进制方式读文件主要利用流对象调用成员函数read
函数原型：`istream& read(char *buffer,int len);`
参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数

*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Person
{
public:
	char m_name[1024];
	int m_age;
};
void test()
{
	////创建输出流对象
	//ofstream ofs("person.txt", ios::out | ios::binary);
	//Person p = { "张三"  , 18 };
	////写文件
	//ofs.write((const char *)&p, sizeof(p));
	////关闭文件
	//ofs.close();


	//3、打开文件
	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	if ( !ifs.is_open() )
	{
		cout << "打开文件失败" << endl;
	}
	Person p;
	ifs.read((char *)&p, sizeof(p));

	cout << "姓名： " << p.m_name << " 年龄： " << p.m_age << endl;


}
int main()
{
	test();
	system("pause");
	return 0;
}