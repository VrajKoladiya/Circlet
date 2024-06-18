#include<stdio.h>
/*
41
41 42
41 42 43
41 42 43 44
41 42 43 44 45
*/
main()
{
	int r,c;
	
	for(r=41;r<=45;r++)
	{
		for(c=41;c<=r;c++)
		{
			printf("%d ",c);
		}
		printf("\n");
	}
}