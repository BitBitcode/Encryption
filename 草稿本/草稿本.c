// 草稿本

#include<stdio.h>
#include<stdlib.h>


int main()
{
	int n = 0;

	for ( ; ; )
	{
		n = rand();
		if (n < 100)
		{
			printf("%d\n", n);
		}		
		getch();
	}

	return 0;
}