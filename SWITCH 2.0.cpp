#include <stdio.h>
int main()
{
	int num1, num2, sum, sub;
	int ch;

	printf("ENTER TWO NUMBERS\n");
	scanf("%d %d",&num1,&num2);
		printf("PRESS 1 FOR ADDITION\n PRESS 2 FOR SUBTRACTION\n");
		scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			sum=num1+num2;
			printf("THE SUM IS %d",sum);
		  break;
		 case 2:
		 	sub=num1-num2;
			 printf("THE SUBTRACTION IS %d",sub); 
		    break;
		  default:
		  	printf("WRONG INPUT...");
		  	break;
	}
}
