#include <stdio.h>
/**
 * main-progrtam entry point
 * Return:0 success, non zero fail
 */
int main(void)
{
	int m, i, j;

	for (i = '0' i <= '9'; i++)
	{
		for(j = '0'; j <= '9'; j++)
		{
			for (m = '0'; m <= '9'; m++)
			{
				if (i < j && j < m)
				{
					putchar(i)
