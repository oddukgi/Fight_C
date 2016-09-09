#include <stdio.h>
#include <stdlib.h>   //malloc, free 함수가 선언된 헤더파일
#include <string.h>   //memset 함수가 선언된 헤더파일 

int main()
{
	char *cPtr = malloc(sizeof(char));
	memset(cPtr, 0, sizeof(char));     // char의 크기를 1byte 만큼 0으로 설정


	//memset(cPtr, 0, sizeof(char*));    //32bit : char 포인터 크기 4바이트만큼
									     //0으로 설정
										 //64bit : char 포인터 크기 8바이트만큼
									     //0으로 설정

	free(cPtr);

	return 0;
}