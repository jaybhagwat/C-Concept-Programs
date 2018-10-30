#include<stdio.h>
void swap(char, char);

int main()
{
	char ch1,ch2;
	scanf("%c%c",&ch1,&ch2);
	swap(ch1,ch2);
	printf("%c %c ",ch1,ch2);
	return 0;
}