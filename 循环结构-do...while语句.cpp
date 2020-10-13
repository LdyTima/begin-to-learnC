/* ******************************************************************************
                              do...while循环语句
   作用：满足循环条件，执行循环语句。
   语法：
   do
   {
		循环语句;
   }while(循环条件);
   注意：与while区别在于do..while会先执行一次循环语句，再判断循环条件。
********************************************************************************** */
//练习案例-- 三位数的水仙花数
#include <iostream>
using namespace std;
int main()
{
	int num = 100;
	do
	{
		int g = num % 10;
		int s = num / 10 % 10;
		int b = num / 100;
		if (g*g*g + s * s*s + b * b*b == num)
		cout << num << endl;
		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}



