#include <stdio.h>
#include <stdlib.h>   //malloc, free 함수가 선언된 헤더파일
#include <string.h>   //memset 함수가 선언된 헤더파일 

int main()
{
	long long *numPtr = malloc(sizeof(long long));
	
	memset(numPtr, 0x27, 8);		// long long = 8byte 메모리 동적할당 

	printf("0x%llx\n", *numPtr);  //0x2727272727272727


	//memset(numPtr, 0, 8);  numPtr이 가리키는 메모리를 8바이트 만큼
	//0으로 설정

	/*
	  memset(numPtr, 0, sizeof(long long));   numPtr이 가리키는 메모리를 0으로 초기화 

		
	 memset(numPtr, 0, sizeof(long long *));
      // 32비트: long long 포인터의 크기 4바이트만큼 0으로 설정(잘못된 방법)
      // 64비트: long long 포인터의 크기 8바이트만큼 0으로 설정(잘못된 방법)

	*/





	//printf("Trying to print 'long long' type"
	//	"\n - by L:  %L"
	//	"\n - by LL: %LL"
	//	"\n - by q:  %q"
	//	"\n - by ll: %ll"
	//	"\n - by dll: %dll"
	//	"\n - by d:  %d"
	//	"\n - bi i:  %i\n", llr + 1LL, llr + 2LL, llr + 3LL, llr + 4LL, llr + 5LL, llr + 6LL, llr + 7LL);
	//printf("binary for -558038695: %s\n", b_prn(-558038695, sizeof(int)));


	free(numPtr);

	return 0;
}