
#include <stdio.h>
int main ()
{

	int a;
	printf("PRESS 1 FOR TABLES\n PRESS 2 FOR ADDITION\n PRESS 3 FOR SEEING HELLO\n ");
	scanf ("%d",&a);
	switch(a)
	{
		case 1:
			
			int n,i;
			printf ("ENTER THE NUMBER OF TABLE\n");
			scanf ("%d",&n);
			printf ("ENTER THE TIMES\n");
			scanf("%d",&a);
			for(i=0;i<=a;i++)
			printf ("%d * %d = %d\n",n,i,n*i);
			break;
		case 2:
			int a,b,sum;
			printf ("ENTER 2 NUMBER FOR ADDITOIN\n");
			scanf ("%d %d",&a,&b);
			sum=a+b;
			printf ("%d IS YOUR ANSWER",sum);
			break;
		case 3:
			printf ("HELLO\n");
			break;
		default:;
			printf("WRONG INPUT...");
			break;
	}
printf("MADE BY SOMYA @_28/5/2020");
	
}
