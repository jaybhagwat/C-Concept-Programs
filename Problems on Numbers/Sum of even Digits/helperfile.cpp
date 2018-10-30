#include"Header.h"
void DisplayNo(LONG iNo)
{
	int iNum=0;
	char *arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	while(iNo!=0)
	{
		iNum=iNo%10;
		printf("%s \t",arr[iNum]);
		iNo=iNo/10;
	}


}
