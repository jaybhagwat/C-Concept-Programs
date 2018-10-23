//1.Accept number from user and display its binary format

//2.Accept number from user and display its binary foormat with true and false kayword

//3.Accept number from user and display number of binary 1's

//4.Write a program which accept one number from user and display its binary equivalent 
////without using any % and / operation. (Use bitwise operators)

//5. Write a program which accept one number from user and check whether its 4th bit is on or off 

//6.Write a program which accept one number from user and check whether its 4th and 7th bit is on or off 

//7.Write a program which accept one number from user and count number on bits from that number.

//8.Write a program which accept one number from user and off 7th bit of that number. Return modified number. 

//9. Write a program which accept one number from user and off 7th and 10th bit of that number. Return modified number. 

//10. Write a program which accept one number from user and toggle 7th bit of that number. Return modified number. 

//11.Write a program which accept one number from user and toggle 7th and 10th bit of that number. Return modified number. 

//12.Write a program which accept one number from user and on its first 4 bits. Return modified number.

//13.Write a program which accept one number from user and check whether its 17th and 7th bit is on or off

//14.Write a program which accept one number and position from user and check whether bit at that position is on or off. If bit is one return TURE otherwise return FALSE. 
#include<stdio.h>
#define TRUE 1
#define FALSE 0


typedef int BOOL;
typedef unsigned int UINT;
const char *arr[]={"false","true"};

void CountBit(UINT no)
{
	int iDigit=0,iCnt=0;
	while(no!=0)
	{
		iDigit=no%2;
		if(iDigit==1)
		{
			iCnt++;
		}
		no=no/2;
	}
	printf("\n%d",iCnt);
}

void DisplayBinaryValue(UINT no)
{
	int iDigit=0;
	while(no!=0)
	{
		iDigit=no%2;
		printf("%s\t",arr[iDigit]);
		no=no/2;
	}
}


void DisplayBinary(UINT no)
{
	int iDigit=0;
	while(no!=0)
	{
		iDigit=no%2;
		printf("%d\t",iDigit);
		no=no/2;
	}
}

void DisplayBinaryUsingBitwise(int iNo)
{
	
}

BOOL Chk4thBit(int iNo)
{
	UINT iMass=0x00000008;
	BOOL bRet;
	if((iMass | iNo)==iNo)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}

BOOL Chk17thBit(int iNo)
{
	UINT iMass=0x00010000;
	BOOL bRet;
	if((iMass & iNo)==iMass)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

BOOL Chk4thAnd7thBit(int iNo)
{
	UINT iMass=0x00000048;
	BOOL bRet;
	if((iMass | iNo)==iNo)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int CountBitsNumber(int iNo)
{
	int iCnt=0;
	while(iNo!=0)
	{
		iNo=iNo/2;
		iCnt++;
	}
	return iCnt;
}

int Off7thBit(int iNo)
{
	UINT iValue;
	UINT iMass=0xFFFFFFBF;
	iValue=iNo & iMass;

	return iValue;
}

int Off7thAnd10thBit(int iNo)
{
	UINT iValue;
	UINT iMass=0xFFFFFFDBF;
	iValue=iNo & iMass;

	return iValue;
}

int Toggle7Bit(int iNo)
{
	UINT iValue;
	UINT iMass=0x00000040;
	iValue=iNo ^ iMass;

	return iValue;
}

int Toggle7And10thBit(int iNo)
{
	UINT iValue;
	UINT iMass=0x00000240;
	iValue=iNo ^ iMass;

	return iValue;
}

int OnFirst4Bits(int iNo)
{
	UINT iValue;
	UINT iMass=0x0000000F;
	iValue=iNo | iMass;

	return iValue;
}

BOOL ChkBitDynamically(int iNo,int iPos)
{
	if((iPos<1) || (iPos>32))
	{
		return iNo;
	}
	UINT iMask=0x1;
	printf("%d\n",iMask);
	iMask=iMask<<(iPos-1);
	printf("%d\n",iMask);
	if(iMask==(iMask & iNo ))
		return TRUE;
	else
		return FALSE;
}

int main()
{
	UINT iNo=0;
	BOOL bRet=FALSE;
	int choice,iCnt;

	printf("Enter the Number\n");
	scanf("%d",&iNo);

	printf("Enter your choice\n 1.DisplayBinary\n 2.DisplayBinaryValue\n 3.CountBit\n 4.Display binary value without using % and / operator\n 5.Chk4thbit\n 6.Chk4th and 7th bit\n 7.Count Number of bits\n 8.Off 7th bit\n 9.Off 7th and 10th bit\n 10.Toggle 7th bit\n 11.Toggle 7th and 10th bit\n 12.On numbers first four bits\nChoice:");
	scanf("%d",&choice);

	switch (choice)
	{
	case 1:DisplayBinary(iNo);
			break;
	case 2:DisplayBinaryValue(iNo);
			break;
	case 3:CountBit(iNo);
			break;
	case 4:DisplayBinaryUsingBitwise(iNo);
			   break;
	case 5:
		{
			bRet=Chk4thBit(iNo);
			if(bRet==TRUE)
			{
				printf("4th bit is not 1");
			}
			else
				printf("4th bit is 1");
			break;
		}
	case 6:
		{
			bRet=Chk4thAnd7thBit(iNo);
			if(bRet==TRUE)
			{
				printf("4th bit and 7th bit is ON");
			}
			else
				printf("4th bit and 7th bit is OFF");
			break;
		}
	case 7:
		{
			iCnt=CountBitsNumber(iNo);
			printf("Number of bits are %d",iCnt);
			break;
		}
	case 8:
		{
			iCnt=Off7thBit(iNo);
			printf("Modified number is %d",iCnt);
			break;
		}
	case 9:
		{
			iCnt=Off7thAnd10thBit(iNo);
			printf("Modified number is %d",iCnt);
			break;
		}
	case 10:
		{
			iCnt=Toggle7Bit(iNo);
			printf("Modified number is %d",iCnt);
			break;
		}
	case 11:
		{
			iCnt=Toggle7And10thBit(iNo);
			printf("Modified number is %d",iCnt);
			break;
		}
		
	case 12:
		{
			iCnt=OnFirst4Bits(iNo);
			printf("Modified number is %d",iCnt);
			break;
		}
		
	case 13:
		{
			bRet=Chk17thBit(iNo);
			if(bRet==TRUE)
			{
				printf("17th bit is ON");
			}
			else
				printf("17th bit is OFF");
			break;
		}
		case 14:
		{
			int iPos=0;
			printf("Enter the Position");
			scanf("%d",&iPos);
			bRet=ChkBitDynamically(iNo,iPos);
			if(bRet==TRUE)
			{
				printf("%dth bit is ON",iPos);
			}
			else
				printf("%dth bit is OFF",iPos);
			break;
		}
	
	default:printf("Enter valid choice");
			break;		
	}
			
	return 0;
}

