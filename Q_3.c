#include<stdio.h>
/*
		5
	  4 5
	3 4 5
  2 3 4 5
1 2 3 4 5
*/
main()
{
	int r,c,s;
	
	for(r=5;r>=1;r--)
	{
		for(s=r;s>1;s--)
		{
			printf("  ");
		}
		for(c=r;c<=5;c++)
		{
			printf("%d ",c);
		}
		printf("\n");
	}
}