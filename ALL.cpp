#include <stdio.h>
#include <string.h>
int main ()
{
	int a;
	swich:
	printf(" PRESS 1 FOR TABLES\n PRESS 2 FOR ADDITION\n PRESS 3 FOR SUBTRACTION\n PRESS 4 FOR MULTIPLICATION\n PRESS 5 FOR DIVISION\n PRESS 6 FOR SQUARE NUMBER\n PRESS 7 FOR CUBE\n PRESS 8 TO SEE DIFFERENT FORMS OF WORD\n ");
	scanf ("\n%d",&a);
	switch(a)
	{
		case 1:
			int n,i,a;
			printf("WELCOME TO TABLE ZONE\n");
			printf ("ENTER THE NUMBER OF TABLE\n");
			scanf ("%d",&n);
			printf ("ENTER THE TIMES\n");
			scanf("%d",&a);
			for(i=0;i<=a;i++)
			printf ("%d * %d = %d\n",n,i,n*i);
		break;
		case 2:
			float c, d;
			printf("WELCOME TO ADDITION ZONE\n");
			printf("ENTER THE  NUMBERS FOR ADDTION\n");
			scanf("%f %f",&c,&d);
			printf("THE SUM OF %.2f AND %.2f IS %.2f\n",c,d,c+d);
		break;
		case 3:
			float e, f;
			printf("WELCOME TO SUBTRACTION ZONE\n");
			printf("ENTER THE NUMBERS FOR SUBTRACTION\n");
			scanf("%f %f",&e, &f);	
			printf("THE SUBTRACTION OF %.2f AND %.2f %.2f\n",e, f,e-f);
		break;
		case 4:
			float g,h;
			printf ("WELCOME TO MULTIPLICATION ZONE\n");	
			printf("ENTER THE NUMBERS FOR MULTIPLICATION\n");
			scanf("%f %f",&g,&h);
			printf("THE PRODUCT OF %.2f AND %.2f %.2f\n",g,h,g*h);
		break;
		case 5:
			float l,j;	
			printf("WELCOME TO DIVISION ZONE\n");
			printf("ENTER THE NUMBERS FOR DIVISION\n");
			scanf("THE QUOTIENT OF %.2f %.2f %2.f\n",l,j,l/j);
		break;	
		case 6:
			float k;
			printf("WELCOME TO SQUARE ZONE\n");
			printf("ENTER THE NUMBER TO GET SQUARE\n");
			scanf("%f",&k);
			printf("THE SQURAE OF %.2f IS %.2f ",k,k*k);
		break;
		case 7:
			 float m;
			 printf ("WELCOME TO CUBE ZONE\n");
			 printf("ENTER THE NUMBER TO GET ITS CUBE\n");
			 scanf("%f",&m);
			 printf("THE CUBE OF %.2f IS %.2f",m,m*m*m);
		break;
		case 8:
			printf ("WELCOME TO STRING.H ZONE\n");
			char word[0];
			printf("ENTER HE WORD TO GET ITS DIFFERENT FORMS\n");
			scanf("%s",&word);
			printf("ENTER THE WORD TO GET ITS LENGTH %d\n",strlen(word));
			printf("ENTER THE WORD TO SEE IT IN UPPERCASE %s\n",strupr(word));
			printf("ENTER THE WORD TO SEE IT IN LOWERCASE %s\n",strlwr(word));
            printf("ENTER THE WORD TO SEE IT IN REVERSED FORM %s\n",strrev(word));
		break;   
		default:
			printf("PLEASE ENTER CORRECT INTEGER\n");
			goto swich;
		break;	
	}
}
