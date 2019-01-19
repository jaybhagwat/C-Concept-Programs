#include<stdio.h>
void StrCatX(char *,char *);

/////////////////////////////////////
#include"Header.h"
int main()
{
	
	char arr[100];
	char brr[100];

	printf("Enter the String\n");
	scanf("%[^'\n']s",arr);
	flushall();
	printf("Enter the 2nd String\n");
	flushall();
	scanf("%[^'\n']s",brr);
	flushall();
	
	StrCatX(arr,brr);

	printf("New string is\n %s",arr);

	return 0;
}


//////////////////////////////////////////
#include"Header.h"
void StrCatX(char *str,char *dest)
{
	while(*str!='\0')
	{
		str++;
	}
	str--;
	while(*dest!='\0')
	{
		*str=*dest;
		str++;
		dest++;

	}
	*dest='\0';

}



	