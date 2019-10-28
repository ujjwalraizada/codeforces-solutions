/*Program to display no. of days in a month
  Mk-2 by Digvijay Singh*/
#include <stdio.h>
int main()
{
	int m;
	printf("Please enter month number \nJanuary is 1 \nFebruary is 2 \nMarch is 3 \nApril is 4 \nMay is 5 \nJune is 6 \nJuly is 7 \nAugust is 8 \nSeptember is 9 \nOctober is 10 \nNovember is 11 \nDecember is 12 \n");
	scanf("%d",&m);
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	{
		printf("There are 31 days in given month \n");
	}
	else if(m==4||m==6||m==9||m==11)	
	{
		printf("There are 30 days in given month \n");
	}
	else if(m==2)
	{
		printf("February has 28 days but 29 days in leap year \n");
	}
	else if(m>12)
	{
		printf("There are only 12 months in a year. You know nothing, Jon Snow");
	}
	return 0;
}

