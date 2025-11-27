#include <stdio.h>
#include <locale.h>
#include <math.h>
#define constEl 2
#define offset 10
#define N 10

void main() {
	setlocale(LC_CTYPE, "RUS");

	float A[10];
    float temp;

    for (int i = 0; i < 10; i++)
    {

        printf("a[%d] = ", i + 1);

        scanf("%f", &temp);

        A[i] = temp - constEl;

    }

    printf("%.*s\n", offset*3+4, "__________________________________________________________");

    for (int i = 0; i < N; i++)
    {

        printf("|%*d|%*.2f|%*.2f|\n", offset, i, offset, temp+constEl, offset, A[i]);

    }
    temp = 0;

    for (int i = 0; i < N; i++)
    {

        temp+= A[i];

    }
    temp /= N;

    printf("Среднее арифметическое: %f\n", temp);

    system("pause");

}