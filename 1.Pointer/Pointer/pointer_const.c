#include <stdio.h>
int main()
{
	const int num = 10;	  // int형 상수
	const int *numPtr;	  // int형 상수를 가리키는 포인터 (=int const *numPtr)
	numPtr = &num;
	*numPtr = 20;		// 컴파일 에러: num이 상수,
						// 역참조로 값 변경 않됨	

	/*pointer to constant 
	  메모리 주소에 저장된 값을 변경할 수 없음 */

	return 0;
}