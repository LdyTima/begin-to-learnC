/* ****************************************************************
                         sizeof 关键字
作用：求某一个数据类型或某一变量在内存中所占空间的字节数。

语法：  sizeof (变量名/数据类型)

***************************************************************** */
#include <iostream>
using namespace std;
int main()
{
	long int along; //定义变量along
	cout << "数据类型	数据所占内存空间"  << endl;
	cout << "short int\t\t" << sizeof(short int) << endl;
	cout << "int		\t" << sizeof(int) << endl;
	cout << "float		\t" << sizeof(float) << endl;
	cout << "char		\t" << sizeof(char) << endl;  //查看数据类型所占内存中的字节数。

	cout << "long int	\t" << sizeof(along) << endl; //查看变量所占内存中的字节数。

	system("pause");
	return 0;
}
