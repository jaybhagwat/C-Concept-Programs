#include"Header.h"
int main(int argc,char* argv[])
{
	int arr[4]={10,20,03,40};
	int iret[4];

	iret[4]=display(arr,4);

	for(int i=0;i<4;i++)
	{
	printf("%d", iret[i]);
	}


	return 0;
}