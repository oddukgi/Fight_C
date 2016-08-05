#include <stdio.h>

int main()
{
	int *numPtr;
	printf("%d\n", sizeof(numPtr));
	printf("%d\n", sizeof(char *));  
	//4byte 로 나온 이유 : C에서 문자를 정수로 인식하므로
	// int 값 4byte로 간주
		
	return 0;
}