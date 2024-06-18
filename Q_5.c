#include<stdio.h>
/*
		5
	  4 5 4
	3 4 5 4 3
  3 3 4 5 4 3 2
1 2 3 4 5 4 3 2 1
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
		for(c=4;c>=r;c--)
		{
			printf("%d ",c);
		}
		printf("\n");
	}
}