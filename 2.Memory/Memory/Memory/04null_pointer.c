#include <stdio.h>

int main()
{
	int *numPtr1 = NULL;	  //포인터에 NULL 저장

	printf("%p\n", numPtr1);   //00000000



	/* 실무에서

	if(ptr == NULL)    ptr이 널포인터라면..
	{
	   ptr = malloc(1024);    1024바이트만큼 메모리 할당

	} 

	
	*/
	return 0;

}