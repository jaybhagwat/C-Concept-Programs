#include<stdio.h>
void StrNCatX(char *,char *,int);


/////////////////////////////////////
#include"Header.h"
int main()
{
	
	char arr[100];
	char brr[100];
	int i=0;

	printf("Enter the String\n");
	scanf("%[^'\n']s",arr);
	flushall();
	printf("Enter the 2nd String\n");
	flushall();
	scanf("%[^'\n']s",brr);
	flushall();
	printf("Enter the value\n");
	scanf("%d",&i);

	StrNCatX(arr,brr,i);

	printf("New string is\n %s",arr);

	return 0;
}

	
/////////////////////////////////////////
#include"Header.h"
void StrNCatX(char *str,char *dest,int iCnt)
{
	while(*str!='\0')
	{
		str++;
	}
	str--;
	while((*dest!='\0') && (iCnt!=0))
	{
		*str=*dest;
		str++;
		dest++;
		iCnt--;

	}
	*dest='\0';

}
