#include <stdio.h>
int main()
{
	int n,i;
	int a;
	printf ("ENTER THE NUMBER TO GET ITS TABLE\n");
	scanf ("%d",&n);
	printf ("ENTER THE TIMES\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	printf("%d * %d = %d\n",n, i, n*i);
}
//made by somya
