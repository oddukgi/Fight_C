#include <stdio.h>

int main()
{
	int *numPtr;
	int num1 = 10;

	numPtr = &num1;
	printf("%d\n", *numPtr);

	return 0;


	/*numPtr(num1狼 皋葛府 林家)--->num1
		                          10
	 *numPtr(num1狼 皋葛府 林家)---> num1
		                          10 */
								 
}