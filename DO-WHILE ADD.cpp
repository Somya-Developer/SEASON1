//INTRODUCING DO-WHILE LOOP
#include <stdio.h>
int main()
{
	int a, b, sum;
	char ync;
	do
	{
	printf("ENTER THE NUMBER\n");
	scanf("%d",&a);
	printf("ENTER THE NUMBER\n");
	scanf("%d",&b);
	sum=a+b;
	printf("THE SUM OF %d AND %d IS %d\n",a,b,sum);
	printf("DO YOU WANT ANATHOR SUM?.(Y/N)\n");
	scanf("%s",&ync);
	}
	while(ync=='y');
}
