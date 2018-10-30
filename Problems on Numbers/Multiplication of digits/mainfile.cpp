#include"Header.h"
int main(int argc, char *argv[])
{
	int iNum=0;

	printf("Enter the number to perform the opertaion");
	scanf("%d",&iNum);

	int iRet=0;
	iRet=MultDigit(iNum);
	printf("%d is the answer",iRet);
	return 0;
}
