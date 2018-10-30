#include"Header.h"
int main()
{
	BOOL iRet=TRUE;
	char arr[100];
	printf("Enter the  String");
	scanf("%[^'\n']s",arr);

	iRet=String(arr);

	if(iRet==TRUE)
	{
		printf("Each alphabate is present in the given string");
	}
	else
	{
		printf("Each alphabate is present NOOOOOTTTTTT in the given string");
	}

	return 0;
}
