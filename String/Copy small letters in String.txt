#include<stdio.h>
void stringCpySmall(char *,char *);


int main()
{
	char str[100],btr[100];
	//int iCnt=0;

	printf("Enter the First string:\n");
	scanf("%[^'\n']s",str);


	stringCpySmall(str,btr);

	printf("the copied string is: %s\n",btr);

	return 0;
}


void stringCpySmall(char *src,char *dest)
{
	while(*src!='\0') 
	{
		if((*src>='a') && (*src<='z'))
		{
		*dest=*src;
		dest++;
		}
		src++;
	}
	*dest='\0';
}
