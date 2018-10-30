#include"Header.h"
int ChkPerfect(int iNum)
{
	int iChk=0;
	int iSum=0;

	if(iNum<=0)
	{
		return FALSE;
	}

	for(iChk=1;iChk<iNum;iChk++)
	{
		if(iNum%iChk==0)
		{
			iSum+=iChk;
		}
	}
	if(iSum==iNum)
	{
		return TRUE;
	}
	else
		return FALSE;
}