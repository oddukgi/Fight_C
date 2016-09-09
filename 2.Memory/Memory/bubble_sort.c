#include <stdio.h>

int main()
{
	int a[] = { 65,25,45,35,55 };
	int i, j, tmp, n;

	n = sizeof(a) / sizeof(int);

	puts(" ------------");
	puts("**정수 정렬 **");
	puts(" ------------");

	//원본출력
	puts(" ** 원 본 출 력 **");
	for (i = 0; i < n; i++)
		printf(" a[%d] = %d \n", i, a[i]);

	// 거품정렬(Bubble sort)
	for (i = 0; i < n - 1; i++)     //회전수 까지 N번 반복 
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])   // 좌측이 크면 교환
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	puts("\n **정렬 후 출력**");
	for (i = 0; i < n; i++)
		printf(" a[%d] = %d \n", i, a[i]);

	puts(" ---------------");

	return 0;

}