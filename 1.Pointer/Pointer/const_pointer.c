#include <stdio.h>

int main()
{
	int num1 = 10;
	int num2 = 20;
	int * const numPtr = &num1;	  //int형 포인터 상수
	numPtr = &num2;			     // 에러 : 포인터(메모리주소)를 변경않됨

	/* constant pointer : 포인터 자체가 상수
	   메모리 주소를 변경 않됨
	*/
}