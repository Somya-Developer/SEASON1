#include <stdio.h>
int main ()
{

int r,s,y;	                         //* THESE ARE SHORT CUT OF WRITING 'RAM=R' 'SHAM=S' AND 'AJAY=Y'
	printf("ENTER THE AGE OF RAM\n");
	scanf("%d",&r);
	printf("ENTER THE AGE OF SHAM\n");
	scanf("%d",&s);
	printf("ENTER THE AGE OF AJAY\n");
	scanf("%d",&y);
	if(r<s&&r<y)	
{
printf ("RAM IS YOUNGEST OF ALL");
}
else if(s<r&&s<y)
{
printf ("SHAM IS YOUNGEST OF ALL");
}
else if (y<r&&y<s)
{
printf ("AJAY IS YOUNGEST OF ALL ");
}
}
//MADE BY SOMYA CHAUHAN





