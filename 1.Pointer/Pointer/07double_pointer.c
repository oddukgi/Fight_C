#include <stdio.h>
int main()
{
	int *numPtr1;
	int **numPtr2;
	int num = 10;
	numPtr1 = &num;				//num의 메모리 주소 저장
	numPtr2 = &numPtr1;			//numPtr1의 메모리 주소 저장

	printf("%d\n", **numPtr2);   //포인터를 두번 역참조하여 num의 메모리 접근

	/*
	int **numPtr2;       // pointer to pointer to int 
	numPtr2 --> numPtr1 메모리 주소 --> num 메모리주소
	
	
	*/

	return 0;
}