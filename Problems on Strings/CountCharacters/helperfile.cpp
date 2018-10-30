#include"Header.h"
int Display(char arr[],int iSize,char ch)
{

int i=0,iCnt=0;
for(i=0;i<iSize;i++)
	{
	if((ch==arr[i]) || ((ch)==(arr[i]+32)))
	{
		iCnt++;
	}
	}
	return iCnt;
}
