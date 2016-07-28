#include <stdio.h>
int main()
{
	int num = 10;
	char c = 'z';
	int *numPtr = &num;
	char *cPtr = &c;

	void *ptr;		 //void 포인터 = 범용 포인터 
	                // 다양한 자료형 포인터를 저장 가능 

	//ptr = numPtr;
	//printf("%d", *ptr);    //에러 : 역참조 않됨

	//ptr = cPtr;
	//printf("%c", *ptr);	  //에러 : 역참조 않됨	

	void v1;				 //에러 



//	numPtr = ptr;    //int 포인터에 void 포인터 저장   [X]
//	cPtr = ptr;		 // char 포인터에 void 포인터 저장 [X]


	return 0;
}