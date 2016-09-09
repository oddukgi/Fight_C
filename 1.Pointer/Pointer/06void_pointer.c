#include <stdio.h>

int main()
{
	int num = 10;
	char ctype = 'b';
	int *numPtr = &num;
	char *cPtr = &ctype;

	void *ptr;

	ptr = numPtr;
	//printf("%d\n", *ptr);    //에러 : void 포인터는 역참조 않됨 
	ptr = cPtr;
	//printf("%c\n", *ptr);

	//numPtr = ptr;     // int 포인터에 void 포인터 저장 X
	//cPtr = ptr;		  // char 포인터에 void 포인터 저장 X

	return 0;
}