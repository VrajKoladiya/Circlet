#include<stdio.h>
/*
1 0 1 0 1
  1 0 1 0
	1 0 1
	  1 0
		1
		
1 2 3 4 5
  1 2 3 4
    1 2 3
      1 2
        1
*/
main()
{
	int r,c,s;
	
	for(r=5;r>=1;r--)
	{
		for(s=5;s>r;s--)
		{
			printf("  ");
		}
		for(c=1;c<=r;c++)
		{
			if(c%2==0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		printf("\n");
	}
}