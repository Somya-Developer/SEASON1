#include <stdio.h>
#include <string.h>
int main ()
{
	int n,i,a;
	int c,d,sum;
	char word[0];
	printf ("HELLO!\n");
	printf ("ENTER THE NUMBER OF TABLE\n");
	scanf("%d",&n);
	printf("ENTER THE TIMES\n");
	scanf("%d",&a);
	for (i=1;i<=a;i++)
	printf("%d*%d=%d\n",n,i,n*i);
	printf ("ENTER 2 NUMBER FOR ADDITION\n ");
	scanf("%d %d",&c,&d);
	sum=c+d;
	printf ("%d IS YOUR ANSWER\n",sum);
	printf ("ENTER THE WORD TO GET IT REVERSED\n");
	scanf("%s",&word);
	printf ("%s IS YOUR ANSWER",strrev(word));
	
}
