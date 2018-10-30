#include"Header.h"

BOOL ChkPrime(int iNum)
{
	int i=2;
	if(iNum==0)
	{
		return FALSE;
	}
	if(iNum<0);
	{
		iNum=-iNum;
	}

	while(i<iNum)
	{
		if(iNum%i==0)
		{
			return FALSE;
		}
		else
		{
			return TRUE;
		}
		i++;
	}
}