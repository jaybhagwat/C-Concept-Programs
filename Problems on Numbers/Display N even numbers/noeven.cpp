#include"Header.h"

void Display(int iNo)
	{
		if(iNo<=0)
			{
				return;
			}
		int b=2*iNo;
		for(int i=1;i<=b;i++)
		{
			if(i%2==0)
			{
				printf("%d\n",i);
			}
		}
}