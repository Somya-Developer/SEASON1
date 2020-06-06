#include <stdio.h>
#include <string.h> 
int main ()
{
	char word [0] , ch=1;
	printf ("ENTER THE WORD TO GET ITS DIFFERENT FORMS\n");
	scanf("%s",&word);
	printf("THE LRNGTH OF STRING IS %d\n",strlen(word));
	printf("THE UPPERCASE IS %s\n",strupr(word));
	printf("THE LOWERCASE IS %s\n",strlwr(word));
	printf("THE REVERSED WORD IS %s\n",strrev(word));
}		
