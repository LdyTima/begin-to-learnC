#include<iostream.h>
void main()
{
	int a = 10 ,z = 5;
	float b = 23.5;
	char c = 'a';
	bool d = true;
	enum color{red,blue,green,black}e = red;
	struct Date
	{
		int year;
		int month;
		int day;
	};
	Date f = {2008,8,8};
	cout<<(a<b)<<endl;
	int  *p = &a;
	cout<<(*p<z)<<endl;

}