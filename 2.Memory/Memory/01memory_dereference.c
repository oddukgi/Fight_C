#include <stdio.h>
#include <stdlib.h>   //malloc, free 함수가 선언된 파일

int main()
{
	int num1 = 20;
	int *numPtr1;

	numPtr1 = &num1;
	int *numPtr2;

	numPtr2 =malloc(sizeof(int));		    // 원본

	//numPtr2 = (int*)malloc(sizeof(int));  //int는 4byte

	printf("%p\n", numPtr1);			//type memory address
	printf("%p\n", numPtr2);

	free(numPtr2);						// 메모리 누수

	return 0;

}