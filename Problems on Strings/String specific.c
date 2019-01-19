#include<stdio.h>
void stringNCpyX(char *,char *,int);


/////////////////////////////////////////
#include"Header.h"
int main()
{
	char str[100],btr[100];
	//int iCnt=0;

	printf("Enter the First string:\n");
	scanf("%[^'\n']s",str);


	stringNCpyX(str,btr,5);

	printf("the copied string is: %s\n",btr);

	return 0;
}

/////////////////////////////////////////

#include"Header.h"
void stringNcpyX(char *src,char *dest,int iCnt)
{
	while((*src!='\0') && (iCnt!=0))
	{
		*dest=*src;
		dest++;
		src++;
		iCnt--;
	}
}
