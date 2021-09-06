#include "holberton.h"
/**
 * _atoi - Get the first integer from a string
 * @s: String
 *
 * Return: The integer obtained
*/
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 1;
	int stop_sign = 0;
	int stop_num = 0;
	int ent_num = 0;
	char num[100];

	while (*(s + i) != '\0')
	{
		if (*(s + i) == '+' && stop_sign == 0)
			l *= 1;
		else if (*(s + i) == '-' && stop_sign == 0)
			l *= -1;
		if (*(s + i) >= '0' && *(s + i) <= '9' && stop_num == 0)
		{
			num[j] = (*(s + i) - 48);
			stop_sign = 1;
			ent_num = 1;
			j++;
		}
		else
		{
			if (ent_num == 1)
				stop_num = 1;
			else
			{
				num[j] = '0';
				num[1] = '\0';
			}
		}
	i++;
	}
	printf("sign: %d", l);
	while (num[k] != '\0')
	{
		putchar(num[k]);
		k++;
	}
	return (0);
}
