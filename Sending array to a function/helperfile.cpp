#include"Header.h"
int display(int *ptr, int size)
{
  int brr[4];

  for(int i=0;i<size;i++)
  {
	  brr[i]=ptr[i];
  }
  
  return *brr;
}
