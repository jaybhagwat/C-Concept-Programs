#include"Header.h"

int main()
{
	char arr[30],brr[30];
	printf("Enter the string\n\n");
	scanf("%[^'\n']s",arr);

	cpyCapital(arr,brr);

	printf("\nNew string of Capital letters is:\n%s\n",brr);

	return 0;
}