/* write a program which accepts string from user count number of words from string */

#include<stdio.h>
int WordCount(char *);
int main()
{
	char arr[100];
	int iRet=0;
	printf("Enter the string:\n");
	scanf("%[^'\n']s",arr);
	
	iRet=WordCount(arr);
		
	printf("Output:\n%d",iRet);
	
	return 0;
}

int WordCount(char *str)
{
	int iCnt=0;
	while(*str!='\0')
	{
		if(*str==' ')
		{
			while((*str==' ') && (*str!='\0'))
			{
				str++;
			}
		}
		else if((*str!=' ') && (*str!='\0'))
		{
			iCnt++;
			while((*str!=' ') && (*str!='\0'))
			{
				str++;
			}
		}
	}
	return iCnt;
}

////////////////////////////////////////////////output
/*
jay@jay-INVALID:~$ gcc WordCount.1.c
jay@jay-INVALID:~$ ./a.out
Enter the string:
Marvellous Infosystem Logic Building
Output:
4
*/

