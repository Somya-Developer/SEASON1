#include <stdio.h>
int main ()
{
	int a,sum;
	char ync;
	do
	{
		printf ("\t\t\t\tJai Shree Ram\n");
		printf ("ENTER YOUR NUMBER FOR CUBE\n");				//HERE 3 VALUES INPUIT
		scanf("%d",&a);
		sum=a*a*a;
		printf("the answer is %d \n",sum);
		printf("DO YOU WANT TO GET ANOTHER CUBE\n");
yncc:		scanf("%s",&ync);
	}
	while(ync=='y'||ync=='Y');
	if(ync=='n'||ync=='N')
	{
		printf ("THANK YOU\n");
	}
	
	else
	{
		printf("PLEASE ANSWER AS Y/N\n");
		goto yncc;
	}
	return 0;
}
