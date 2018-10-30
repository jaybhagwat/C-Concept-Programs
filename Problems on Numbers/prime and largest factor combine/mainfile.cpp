#include"Header.h"
int main(int argc,char* argv[])
{
	int iNum=0;
	int bRet=0;
//	int iRet1=0;

	printf("enter a number\n");
	scanf("%d",iNum);

	bRet=ChkPrime(iNum);

	//	if(iRet==0)
	//	{
		//	printf("Invalid Input number should not be 0\n");
	//	}
		if(bRet==1)
		{
			printf("its largest factor is 1 hence it is a prime number\n");
		}
		else
			printf("%d is the largest Factor\n",bRet);

		return 0;
}
	