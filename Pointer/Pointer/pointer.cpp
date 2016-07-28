#include <stdio.h>

int main()
{
	int *numPtr;		
	int num = 10; 
	numPtr = &num;	   //num의 메모리 주소를 포인터 변수에 저장
	printf("%p\n", numPtr);
	printf("%p\n", &num);


	// pointer to int


	return 0;
}