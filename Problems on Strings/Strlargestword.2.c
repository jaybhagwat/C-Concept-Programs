/*Write a program which accept string from user and return length of largest word */

#include<stdio.h>
int CountLenght(char *str);

int main()
{
	char arr[100];
	int iRet=0;

	printf("Enter the String\n:");
	scanf("%[^'\n']s",arr);

	iRet=CountLenght(arr);
	printf("output\n:%d",iRet);

	return 0;
}

	
int CountLenght(char *str)
{
	int iCnt=0;
	int iRet=0;
	while(*str!='\0')
	{
		if(*str==' ')
		{
			while((*str==' ') && (*str!='\0'))
			{
				str++;
			}
		}
		else if(*str!=' ')
		{
			iCnt=0;
			while((*str!=' ') && (*str!='\0'))
			{
				iCnt++;
				str++;
			}
			if(iRet<iCnt)
			{
			iRet=iCnt;
			}
		}
	}
	return iRet;
}
//////////////////////////output
/*
jay@jay-INVALID:~$ gcc Strlargestword.c
jay@jay-INVALID:~$ ./a.out
Enter the String
:Marvellous Infosystem logic building
output
:10
*/
