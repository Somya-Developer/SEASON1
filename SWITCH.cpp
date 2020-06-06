#include <stdio.h>
int main ()
{
	int n;
	int num1,num2;
	int mul,sum,sub;
	float div;
	printf ("\t\t\t\tJai Shree Ram\n");
	printf ("ENTER THE FIRST NUMBER\n");
	scanf ("%d",&num1);
	printf("ENTER THE SECOND NUMBER\n");
	scanf("%d",&num2);
	printf (" PRESS 1 FOR ADDITION\n PRESS 2 FOR SUBTRACTION\n PRESS 3 FOR MULTIPLICATION \n PRESS 4 FOR DIVISON\n");
	scanf ("%d",&n);
	switch (n)
	{
		case 1:
		printf("THIS IS ADDITION PROGRAM\n");
		sum=num1+num2;
		printf("SUM OF NUM1 AND NUM2 IS %d\n",sum);
		break;
		case 2:
		printf("THIS IS SUBTRACTION PROGRAM\n");
		sub=num1-num2;
		printf("SUBTRACTION OF NUM1 AND NUM2 IS %d\n",sub);
		break;	
	    case 3:
	    printf("ENTER THE MULTIPLICATION PROGRAM\n ");
		mul=num1*num2;
		printf ("PRODUCT OT NUM1 AND NUM2 IS %d\nn",mul); 
	        break;
	    case 4:
	    printf("THIS IS DIVISION PROGRAM\n");
		div=num1/num2;
		printf("QUOTIENT OF NUM1 AND NUM2 IS %f",div); 
	        break;
	    default:
	    	printf ("WRONG INPUT...");
	    	return 0;
	    	
	}
	printf("THANKS FOR USING OUR SOFTWARE\n");
	printf("MADE BY SOMYA @30/5/20");
	
}
