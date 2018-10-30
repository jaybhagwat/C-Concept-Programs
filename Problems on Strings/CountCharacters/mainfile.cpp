#include"Header.h"
int main()
{
	int iRet=0;
	char b='b';
	char ch[5]={'a','b','B','C','B'};
	printf("entered elements");

	for(int i=0;i<5;i++)
	{
		printf("%c",ch[i]);
	}

	iRet=Display(ch,5,b);
	printf("\n\n%d\n\n",iRet);

	return 0;
}
