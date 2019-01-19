#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 2
BOOL chkPalindrome(char *);


////////////////////////////////////////
#include"Header.h"
int main()
{
	BOOL iRet=TRUE;
	char arr[100];
	printf("Enter the String\n");
	scanf("%[^'\n']s",arr);

	iRet=chkPalindrome(arr);

	if(iRet==TRUE)
	{
		printf("String is Palindrome");
	}
	else
	{
		printf("string is not Palindrome");
	}

	return 0;
}

	
////////////////////////////////////////
#include"Header.h"
BOOL chkPalindrome(char *str)
{
	char *end=str;
	while(*end!='\0')
	{
		end++;
	}
	end--;
	while(str<end)
	{
		if((*str>=65) && (*str<=90))
		{
			*str=*str+32;
		}
		else if((*end>=65) && (*end<=90))
		{
			*end=*end+32;
		}

		if(*str!=*end)
		{
			break;
		}
		str++;
		end--;
	}

	if(str>=end)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}


