//1.Write a program which accept one number and position from user and check whether bit at that 
////position is on or off. If bit is one return TURE otherwise return FALSE

#include<stdio.h>
typedef unsigned int UINT;
typedef UINT BOOL;
#define TRUE 1
#define FALSE 0

UINT DynamicToggleFLN(UINT,UINT);
BOOL DynamicBitChk(UINT,UINT);
UINT DynamicOffBit(UINT,UINT);
UINT DynamicOnBit(UINT,UINT);
UINT DynamicToggleBit(UINT,UINT);

UINT main()
{
	UINT iNum=0,iRet=0;
	UINT iPos=0;
	BOOL bRet=FALSE;
	
	printf("Enter the number\n:");
	scanf("%d",&iNum);

	printf("Enter the Positon\n:");
	scanf("%d",&iPos);

	bRet=DynamicBitChk(iNum,iPos);

	printf("%d\n",bRet);

	iRet=DynamicOffBit(iNum,iPos);
	if(iRet==FALSE)
	{
		printf("please Enter valid Position");
	}
	else
	printf("new number After truning that bit OFF is :%d\n",iRet);
	
	
	iRet=DynamicOnBit(iNum,iPos);
	if(iRet==FALSE)
	{
		printf("please Enter valid Position");
	}
	else
	printf("new number After turning the bit ON is :%d\n",iRet);
	
	iRet=DynamicToggleBit(iNum,iPos);
	if(iRet==FALSE)
	{
		printf("please Enter valid Position");
	}
	else
	printf("new number After toggling bit is :%d\n",iRet);
	
	iRet=DynamicToggleFLN(iNum,iPos);
	if(iRet==FALSE)
	{
		printf("please Enter valid Position");
	}
	else
	printf("new number After toggling First and last nibble is :%d\n",iRet);
	
	return 0;
}

BOOL DynamicBitChk(UINT iNum,UINT iPos)
{
	UINT iMask=0x1;
	iMask=iMask<<(iPos-1);
	iMask=~iMask;
	if((iPos<1) || (iPos>32))
	{
		return FALSE;
	}
	if((iMask | iNum) == iMask)
	{
		return FALSE;
	}
	else
		return TRUE;
}

//2. Write a program which accept one number and position from user and off that bit. Return modified number. 
//Input :  10 2 
//Output :  8

UINT DynamicOffBit(UINT iNum,UINT iPos)
{
	if((iPos<1) || (iPos>32))
	{
		return FALSE;
	}
	UINT iMask=0x1;
	UINT iRet=0;
	iMask=iMask<<(iPos-1);
	iMask=~iMask;

	iRet=iMask & iNum;

	return iRet;
}

//3. Write a program which accept one number and position from user and on that bit. Return modified number. 
//Input :  10 3 
//Output :  14
UINT DynamicOnBit(UINT iNum,UINT iPos)
{
	if((iPos<1) || (iPos>32))
	{
		return FALSE;
	}
	UINT iMask=0x1;
	UINT iRet=0;
	iMask=iMask<<(iPos-1);

	iRet=iMask | iNum;

	return iRet;
}

//4. Write a program which accept one number and position from user and toggle that bit. Return modified number. 
//Input :  10 3 
//Output :  14 

UINT DynamicToggleBit(UINT iNum,UINT iPos)
{
	if((iPos<1) || (iPos>32))
	{
		return FALSE;
	}
	UINT iMask=0xFFFFFFFF;
	UINT iRet=0;

	iRet=iMask ^ iNum;

	return iRet;
}

//5. Write a program which accept one number from user and toggle contents of 
//	first and last nibble of the number. Return modified number. 
UINT DynamicToggleFLN(UINT iNum,UINT iPos)
{
	if((iPos<1) || (iPos>32))
	{
		return FALSE;
	}
	UINT iMask=0xF000000F;
	UINT iRet=0;

	iRet=iMask ^ iNum;

	return iRet;
}