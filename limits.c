#include<stdio.h>
#include<limits.h>
  void main()
{
  printf("short int:\nsigned:%hd to %hd\n",SHRT_MIN, SHRT_MAX);
  printf("unsigned: %d to %hu", 0, USHRT_MAX);
  printf(" int:\nsigned:%d to %d\n",INT_MIN,INT_MAX);
  printf(" Unsigned:%d to %u",0,UINT_MAX); 
  printf("long int:\nsigned:%ld to %ld",LONG_MIN,LONG_MAX);
  printf(" unsigned:%ld to %lu",ULONG_MAX);
  printf("long long int:\nsigned to %lld to %lld",LONG_LONG_MIN,LONG_LONG_MAX);	
  printf(" unsigned:%lu to%lu",ULONG_MAX);
}




