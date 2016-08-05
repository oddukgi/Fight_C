#include <stdio.h>

int main()
{
	int *numPtr=0;
	int num = 20;
//	numPtr = num;   참조하는 형이 달라서 에러 
	numPtr = &num;	//numPtr은 int 포인터형, &num은 int형 변수의 주소이므로 자료형이 일치
					// numPtr은 pointer to int, &num1은 address of int이므로 자료형이 일치


	

	return 0;


}