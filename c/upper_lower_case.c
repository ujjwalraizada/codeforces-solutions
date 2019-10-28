#include <stdio.h>
int main()
{
	char l,L;
	printf("Please enter some letter\n");
	scanf("%c",&l);
	if(l>=97&&l<=122)
	{
		L=l-32;
		printf("This letter was lowercase. It's uppercase form is %c\n",L);
	}
	else
	{
		printf("The letter %c is uppercase\n",l);
	}
	return 69;
}
