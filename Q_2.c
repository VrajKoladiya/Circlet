#include<stdio.h>
/*
11
12 13
14 15 16
17 18 19 20
*/
main()
{
	int r,c,n=11;
	
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}
}