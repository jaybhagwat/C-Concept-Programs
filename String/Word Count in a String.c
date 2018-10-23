#include<stdio.h>
int CountWords(char *str);
	
int main()
{
	char arr[100];
	int iRet=0;

	printf("Enter the String\n");
	scanf("%[^'\n']s",arr);
	flushall();
	iRet=CountWords(arr);
	printf("%d",iRet);

	return 0;
}

int CountWords(char *str)
{
	int iCnt=0;
	if(*str=='\n')
	{
		return 0;
	}
	
	while(*str!='\0')
	{
		if((*str==' '))
		{
			while((*str==' ') && (*str!='\0'))
			{
			str++;
			}
		}
		else if(*str!=' ') 
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