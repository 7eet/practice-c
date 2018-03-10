#include <stdio.h>
int main()
{
	int years,month,day;
	int y,m,d;
	int years1,month1,day1;
	printf("enter your birth date:\n");
	printf("enter year: \n");
	scanf("%d",&years);
	printf("enter month: \n");
	scanf("%d",&month);
	printf("enter day: \n");
	scanf("%d",&day);
	printf("year-%d\nmonth-%d\nday-%d\n",years,month,day);
	printf("enter today's date Y-M-D \n");
	printf("enter year: \n");
	scanf("%d",&y);
	printf("enter month: \n");
	scanf("%d",&m);
	printf("enter day: \n");
	scanf("%d",&d);
	
	if (years<=y)
	{ 
		if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
		{
			
			if (day<=31)
			{	
				years1=y-years;
				month1=m-month;
				day1=d-day;
				printf("%d Years\n %d Month\n %d days old as of today\n",years1,month1,day1);
			}
			else
				printf("enter valid date");				
				
		}
		if (month==2 || month==4 || month==6 || month==9 || month==11 )
		{	if (day<=30)			
			{
				years1=y-years;
				month1=m-month;
				day1=d-day;
				printf("%d Years\n %d Month\n %d days old as of today\n",years1,month1,day1);
			}
			else
				printf("enter valid date");
		}
		
	}

		
	return 0;
}
