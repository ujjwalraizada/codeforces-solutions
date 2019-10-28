/*Program to Identify whether given year is leap year or not*/
#include <stdio.h>
int main()
{
	int y;
	printf("This Program Tells whether given year is leap year or not\n Please enter a year of 21st Century only.\n");
	scanf("%d",&y);
	if(y>2100||y<2000)
	{
		printf("You know nothing, Jon Snow...");
	}
	else if(y==2100)
	{
		printf("The year 2100 is not a leap year");
	}
	else
	{
		switch(y%4)
		{
		
		case 0:
		
			printf("The year %d is a leap year\n",y);
			break;
	
		default:
		
			printf("The year %d is NOT a leap year\n",y);
	    }
	}
	return 0;
}
