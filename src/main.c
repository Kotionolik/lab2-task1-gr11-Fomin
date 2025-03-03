/* hello.c */
#include <stdio.h>
#include <stdbool.h>

void Prime()
{
	bool prme = true;
	for (int i = 100; i < 1000; i++)
	{
			for(int j = 2; j < (i / 2) + 1; j++)
			{
					if(i % j == 0)
					{
							prme = false;
							break;
					}
			}
		if(prme)
		{
			printf("%d", i);
		}
	}
}

void main (void)
{
	printf("Output of all three figure numbers:\n");
	for(int i = 100; i < 1000; i++)
	{
			printf("%d\n", i);
	}
	char ans;
	printf("Do you want to see the prime numbers? (y/any key)\n");
	scanf("%c", &ans);
	if(ans == 'y')
	{
		Prime();
	}
}
