#include <stdio.h>
#include "main.h"
/**
 * convert_day - convert month to days
 * @month: int type
 * @day: int type
 * Return: Always 0.
 */
int convert_day(int month, int day)
{
	switch (month)
	{
		case 2:
			day = 31 + day;
			break;
		case 3:
			day = 59 + day; 
			break;
		case 4:
			day = 90 + day;
			break;
		case 5:
			day = 120 + day;
			break;
		case 6:
			day = 151 + day;
			break;
		case 7:
			day = 181 + day;
			break;
		case 8:
			day = 212 + day;
			break;
		case 9:
			day = 243 + day;
			break;
		case 10:
			day = 273 + day;
			break;
		case 11:
			day = 304 + day;
			break;
		case 12:
			day = 334 + day;
			break;
		default:
			break;
	}
	return (day);
}

/**
 * print_remaining_days - takes a date and prints days, month and year
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 || year % 400 == 0) || (year % 400 == 0 && year % 100 == 0))
	{
		if (month >= 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}

int main(void)
{
	int month;
	int day;
	int year;

	moanth = 4;
	day 01;
	year = 1997;
	day = convert_day(month, day);
	print_remaining_days(month, day, year);
	return (0);
}
