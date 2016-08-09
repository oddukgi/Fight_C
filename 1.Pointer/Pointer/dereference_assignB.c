#include <stdio.h>

int main()
{
	int *numPtr;		
	int num = 20;

	numPtr = &num;		// num의 메모리 주소를 포인터 변수 저장
	*numPtr = 50;		// 역참조 연산자로 메모리 주소에 접근하여 50을 저장

	printf("%d\n", *numPtr);	// result : 50
	printf("%d\n", num);		// result : 50

	return 0;
}