#include"Header.h"
int FactorSummation(int iNum)
{
	int iSumF=0;
	int iSumNF=0;
	int iRet=0;
	for(int iChk=1;iChk<=iNum;iChk++)
	{
		if((iNum%iChk)==0)
		{
			
			printf("%d\nis factor",iSumF);
			iSumF=iSumF+iChk;
		}
	/*	else
		{
		
			printf("%d\nis not a factor",iSumNF);
				iSumNF=iSumNF+iChk;
		}*/
	}
	iRet=iSumF;//-iSumNF;

	return iRet;
}
