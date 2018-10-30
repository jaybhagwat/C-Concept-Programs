#include"Header.h"
int main()
{
	int iNo=0;
	BOOL iRet=FALSE;

	printf("enter the number");
	scanf("%d",&iNo);
	iRet=ChkPrime(iNo);
	if(iRet==TRUE)
	{
		printf("it is a prime NUMber");
	}
	else
	{
		printf("it is not a prime number");
	}
}