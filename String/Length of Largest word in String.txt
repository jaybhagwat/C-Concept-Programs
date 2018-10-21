#include<stdio.h>
int CountLenght(char *str);


int main()
{
	char arr[100];
	int iRet=0;

	printf("Enter the String");
	scanf("[^'\0']s",arr);

	iRet=CountLenght(arr);
	printf("%d",iRet);

	return 0;
}


int CountLenght(char *str)
{
	int iCnt=0;
	int iRet=0;
	int arr[20];
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