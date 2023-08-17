#include "main.h"

/**
 * convert_day - converts day of month to day of year,
 * taking leap year into account
 * @month: month in number format
 * @day: day of month
 * Return: day of year
 */
int convert_day(int month, int day)
{
	int day_of_year = 0;

	switch (month)
	{
		case 1:
			day_of_year = day;
			break;
		case 2:
			day_of_year = 31 + day;
			break;
		case 3:
			day_of_year = 59 + day;
			break;
		case 4:
			day_of_year = 90 + day;
			break;
		case 5:
			day_of_year = 120 + day;
			break;
		case 6:
			day_of_year = 151 + day;
			break;
		case 7:
			day_of_year = 181 + day;
			break;
		case 8:
			day_of_year = 212 + day;
			break;
		case 9:
			day_of_year = 243 + day;
			break;
		case 10:
			day_of_year = 273 + day;
			break;
		case 11:
			day_of_year = 304 + day;
			break;
		case 12:
			day_of_year = 334 + day;
			break;

		default:
			break;
	}

	return (day_of_year);
}
