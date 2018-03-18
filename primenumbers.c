#include <stdio.h>
int main()
{
	int i,j;    
	printf("2\n");
	for(i=3;i<30;i++) 
	{
		for(j=3;j<i;j++)
		{
			if ( i%j==0 && i==j )
				printf("%d\n",i);
				continue;
				
		}	
        }
	return 0;
}


