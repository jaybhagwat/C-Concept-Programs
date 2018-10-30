#include"Header.h"
int main(int argc,char* argv[])
{
	int iRet=FALSE;
	int iNum=0;
	printf("enter the numbber");
	scanf("%d",&iNum);
	iRet=ChkPerfect(iNum);
	if(iRet==TRUE)
	{
		printf("NUmber is perfect number");
	}
	else
		printf("number is not a perfect number");

	return 0;
}