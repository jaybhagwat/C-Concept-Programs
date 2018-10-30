#include"Header.h"
int main()
{
	int iCnt=0,i=0;
	int *Brr=NULL;
	int iLenght=0;
	printf("enter the number of count ");
	scanf_s("%d",&iLenght);

	Brr=(int*)malloc(iLenght*sizeof(int));

	printf("%d",sizeof(Brr));
	printf("Enter the elements");

	for(i=0;i<iLenght;i++)
	{
		scanf("%d",Brr[i]);
	}

	free(Brr);
	return 0;
}
