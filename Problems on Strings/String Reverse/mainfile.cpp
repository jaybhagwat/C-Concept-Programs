#include"Header.h"
int main()
{
	char arr[100];
	printf("Enter the string");
	scanf("%[^'\n']s",arr);
	
	StringReverse(arr);
	printf("\n Reverse string is \n");
	printf("%s",arr);

	return 0;
}
