#include"Header.h"
void Display(int *arr,int iSize)
{
	int iCnt=0,iNo=0,iRet=0,iNum=0,i=0;
	int *brr=NULL;
	brr=(int*)calloc(10,sizeof(int));
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		while(arr[iCnt]!=0)
		{
			iNo=arr[iCnt]%10;
			brr[iNo]++;
			arr[iCnt]=arr[iCnt]/10;
		}
	}

	for(i=0;i<10;i++)
	{
		if(brr[i]>iNum)
		{
			iNum=brr[i];
			iRet=i;
		}
	}

	printf("%d occurs %d times",iRet,iNum);

	return;
}