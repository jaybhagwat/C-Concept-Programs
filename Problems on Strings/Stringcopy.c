#include<stdio.h>
void stringCpyX(char *,char *);


/////////////////////////////////////////
#include"Header.h"
int main()
{
	char str[100],btr[100];


	printf("Enter the First string:\n");
	scanf("%[^'\n']s",str);


	stringCpyX(str,btr);

	printf("the copied string is: %s\n",btr);

	return 0;
}

/////////////////////////////////////////

#include"Header.h"
void stringNcpyX(char *src,char *dest)
{
	while(*src!='\0')
	{
		*dest=*src;
		dest++;
		src++;
	}
}
