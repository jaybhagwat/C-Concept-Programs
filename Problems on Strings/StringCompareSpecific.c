#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 2
BOOL strNCmpX(char *,char *,int);

///////////////////////////////////////
#include"Header.h"
int main()
{
	BOOL iRet=TRUE;
	char arr[100];
	char brr[100];
	printf("Enter the String\n");
	scanf("%[^'\n']s",arr);
	flushall();
	printf("Enter the String\n");
	scanf("%[^'\n']s",brr);

	iRet=strNCmpX(arr,brr,5);

	if(iRet==TRUE)
	{
		printf("N Contents are same");
	}
	else
	{
		printf("N contents are not same");
	}

	return 0;
}


//////////////////////////////////////////////
#include"Header.h"
BOOL strNCmpX(char *str,char *dest,int iCnt)
{
	while((*str!='\0') && (*dest!='\0') && (iCnt!=0))
	{
		if(*str!=*dest)
		{
			break;
		}
		str++;
		dest++;
		iCnt--;
	}

	if(iCnt==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}



