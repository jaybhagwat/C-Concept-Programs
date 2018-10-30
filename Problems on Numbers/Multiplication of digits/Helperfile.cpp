#include"Header.h"

UINT MultDigit(LONG iNo)
{
	UINT iNum=0;
	UINT iRet=1;
	while(iNo!=0)
	{
		iNum=iNo%10;
		if(iNum!=0)
		{
		iRet=iRet*iNum;
		}
		iNo=iNo/10;
	}

	return iRet;
}
