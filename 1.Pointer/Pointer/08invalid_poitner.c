#include <stdio.h>

int main()
{
	//int *numPtr = 0x1000;	  //포인터에 0x1000 값 대입 
						      /* 안되는 이유: 잘못된 주소값 */

	int *numPtr = 0x00CCFC2C;

	printf("%d\n", *numPtr);

	return 0;
}