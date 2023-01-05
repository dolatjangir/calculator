#include<stdio.h>
int main()

{
	{
		printf(" happy new year\n");
	}
	int row,col;
	for(row=1;row<=5;row++)
	{

	for ( col = 1; col<= 5 ; col++)
	{  
		if(col==1 || col==5 || row==3)
		printf(" h ");
	else
		printf(" ");

	}
}
return 0;
}	