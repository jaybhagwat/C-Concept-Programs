#include"Header.h"
int main()
{
	int iCnt=0,iNum=0;
	int *brr=NULL;
	
	printf("Enter the Number");
	scanf("%d",&iNum);

	brr=(int*)calloc(iNum,sizeof(int));

	printf("Enter the elements");
	for(iCnt=0;iCnt<iNum;iCnt++)
	{
		scanf("%d",&brr[iCnt]);
	}
	Display(brr,iNum);

	
	free(brr);
	return 0;

}