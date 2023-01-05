#include<stdio.h>
int main()
{

	int row, col;
	printf("dolat jangir");

	for (row = 1; row <= 3; row++);
	{
		for (col >= 1; col <= 15; col++);
		{
			if ((col >= 4 - row && col <= 4 + row) || (col>=12-row&&col<=12+row))
			{
				printf(" * ");
			} else
				printf(" ");

		}
		printf("\n");
	}
	for(row=1;row<=8;row++)
	{
		for(col=1;col<=15;col++)
		{
			if (col>=row&&col<=16-row)
			{
			printf(" * ");
			} else
				printf(" ");

		}
		printf("\n");
	}
	
}