#include<stdio.h>
void stringCpyCap(char *,char *);

///////////////////////////////////////
#include"Header.h"
int main()
{
	char str[100],btr[100];
	//int iCnt=0;

	printf("Enter the First string:\n");
	scanf("%[^'\n']s",str);


	stringCpyCap(str,btr);

	printf("the copied string is: %s\n",btr);

	return 0;
}

/////////////////////////////////////////

#include"Header.h"
void stringCpyCap(char *src,char *dest)
{
	while(*src!='\0') 
	{
		if((*src>='A') && (*src<='Z'))
		{
		*dest=*src;
		dest++;
		}
		src++;
	}
	*dest='\0';
}
