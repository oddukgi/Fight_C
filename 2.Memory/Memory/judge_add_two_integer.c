#define _CRT_SECURE_NO_WARNINGS

//증상: visual studio 2005 이상부터 'scanf', fopen' , 'strcpy' 등을 사용하면 
//Warning C4996 경고가 발생하게 된다.

//해결책: secure 모드로 scanf_s 모드를 사용해서
//해결을 하라고 하지만, 다른 곳에서 쓰기에는 호환성에 문제가 많으므로 
//#define _CRT_SECURE_NO_WARNINGS 매크로를 붙인다.

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num1;
	int num2;

	int *numPtr1 = malloc(sizeof(int));
	int *numPtr2 = malloc(sizeof(int));

	
	scanf("%d %d", &num1, &num2);
	 
	*numPtr1 = num1;		//역참조하여 값을 넣음
	*numPtr2 = num2;

	printf("%d\n", *numPtr1 + *numPtr2);

	free(numPtr1);
	free(numPtr2);

	return 0;
}
