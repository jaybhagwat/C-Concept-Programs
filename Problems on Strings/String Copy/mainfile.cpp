#include"Header.h"
int main()
{
	char str[100],dest[100];
	printf("Enter the string");
	scanf("%[^'\n']s",str);
	
	stringCpyX(str,dest);

	printf("Copied string is:%s",dest);
		printf("Copied string is:%s",str);

	return 0;
}