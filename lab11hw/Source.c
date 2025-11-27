#include <stdio.h>
#include <locale.h>
#include <math.h>


void main() 
{
	setlocale(LC_CTYPE, "RUS");
	int count = 0;
	printf("Введите 8 элементов массива через enter:\n");
	double arr[8];

	for (int i = 0; i < 8; i++) {
		scanf("%lf", &arr[i]);
	}

	double temp = arr[0];

	for (int i = 1; i < 8; i++)
	{
		if (temp > arr[i]) 
		{
			temp = arr[i];
			count = i;
		}
	}
	printf("Количество элементов массива, расположенных до минимального элемента: %d", count);


}