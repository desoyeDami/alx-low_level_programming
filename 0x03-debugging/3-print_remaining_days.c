#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 || year % 400 == 0) && (year % 100 == 0))
	{
		int leap_year = 366;

		if (day >= 60 && month >= 2)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", leap_year - day);
		}
	}
	else
	{
		int std_year = 365;

		if (day == 60 && month == 2)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", std_year - day);
		}
	}
}
