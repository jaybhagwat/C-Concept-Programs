#include"Header.h"
int LargeFactor(int iNum)
/*{
	int e=0;
	int iRet=0;
	for(e=1;e<=(iNum/2);e++)
	{
		if((iNum%e)==0)
		{
			iRet=e;
		}
	}
	return iRet;
} */

/*{
	int e=0;
	//int iRet=0;
	if(iNum<0)
	{
		iNum=-iNum;
	}
	if(iNum==0)
	{
		return 0;
	}

	for(e=(iNum/2);e>=0;e--)
	{
		if((iNum%e)==0)
		{
		    return e;
		}
	}
//	return iRet;

	
}

*/

/*{
	int i=iNum/2;
	while((iNum/2)>=1)
	{
		if(iNum%i==0)
		{
			return i;
		}
		i--;
	}
}*/

{

		int i=1;
		int iRet=0;
		while(i<=iNum/2)
		{
			if(iNum%i==0)
			{
			iRet+=i;
			}
			i++;
		}
		return iRet;
}