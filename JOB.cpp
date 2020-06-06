#include <stdio.h>
int main()
{
	int a, i;
	char name[18];
	int age[3];
	int phno[10];
	printf("ENTER THE NUMBER OF NAMES YOU WANT TO ENTER\n");
	scanf("%d",&a);
	for (i=0;i<a;i++)
	{
		printf("ENTER THE NAME \n");
		scanf("%s",&name[i]);
		printf ("ENTER THE AGE\n");
		scanf("%d",&age[i]);
		printf("ENTER THE PHONE NUMBER \n");
		scanf("%d",&phno[i]);																																								
	}
	return 0;
}
