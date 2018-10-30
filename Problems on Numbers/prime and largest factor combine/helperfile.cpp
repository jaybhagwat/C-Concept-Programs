#include"Header.h"
int LargestFactor(int iNum)
{
	//int iRet=0;
	int iChk=0;
	for(iChk=(iNum/2);iChk>=1;iChk--)
	{
		if((iNum%iChk)==0)
		{
			break;
		}
	}
	return iChk;
}

int ChkPrime(int iNo)
{


	int iRet=0;
	iRet=LargestFactor(iNo);
	if(iRet==1)
	{
			return 1;
	}
	else
	{
			return iRet;
	}
}