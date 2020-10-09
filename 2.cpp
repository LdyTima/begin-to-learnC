#include<iostream.h>
void main()
{
	enum Sport
	{
		excellence,good,middle,pass,failure
	};
	Sport ST_Sports;
	struct Date
	{
		int month;  
		int day;
		int year;
	};
	struct Person
	{
		int XT_Num;
		char XT_Name[8];
		bool ST_Sex;
		Date ST_Birthday;
		float ST_Culturte;
		float ST_Specialty;
		Sport ST_Sports;

	};
}