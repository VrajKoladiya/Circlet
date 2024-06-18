#include<stdio.h>
/*
1 				  1
1 2 			2 1
1 2 3 		  3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
*/
main()
{
	int r,c,s;
	
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d ",c);
		}
		for(s=5;s>r;s--)
		{
			printf("    ");
		}
		for(c=r;c>=1;c--)
		{
			printf("%d ",c);
		}
		printf("\n");
	}
	
}