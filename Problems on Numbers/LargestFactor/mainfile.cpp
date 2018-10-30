#include"Header.h"
int main()
{
	int iRet=0;
	int iNo=0;
	printf("enter the number");
	scanf("%d",&iNo);
	iRet=LargeFactor(iNo);
	printf("%d is the largest factor of  number %d\n",iRet,iNo);

	return 0;
}