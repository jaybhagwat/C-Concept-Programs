#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 2
BOOL strCmpX(char *,char *);


/////////////////////////////////////////
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

	iRet=strCmpX(arr,brr);

	if(iRet==TRUE)
	{
		printf(" Contents are same");
	}
	else
	{
		printf(" contents are not same");
	}

	return 0;
}

////////////////////////////////////////////////////

#include"Header.h"
BOOL strCmpX(char *str,char *dest)
{
	while((*str!='\0') && (*dest!='\0'))
	{
		if(*str!=*dest)
		{
			break;
		}
		str++;
		dest++;
	}

	if((*str=='\0') && (*dest=='\0'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}



