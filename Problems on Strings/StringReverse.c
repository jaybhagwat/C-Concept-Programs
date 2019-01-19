#include<stdio.h>
void StrRevX(char *);


///////////////////////////////////
#include"Header.h"
int main()
{
	
	char arr[100];
	printf("Enter the String\n");
	scanf("%[^'\n']s",arr);

	StrRevX(arr);

	printf("Reversed String:\n %s",arr);

	return 0;
}

	
///////////////////////////////////////////
#include"Header.h"
void StrRevX(char *str)
{
	char temp;
	char *first,*last;
	first=str;
	last=str;
	while(*last!='\0')
	{
		last++;
	}
	last--;
	while(first<=last)
	{
		temp=*first;
		*first=*last;
		*last=temp;
		first++;
		last--;
	}
}
