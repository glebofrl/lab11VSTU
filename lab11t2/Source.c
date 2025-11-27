#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define arrMax 99



float func_fx(float i) {
    float fx = pow(i, 2) + 5 * sin(i);
    return fx;
}


void main()
{

    setlocale(LC_CTYPE, "RUS");

    float x, dx, fx;
    int countPositiveNum = 0; int countNegativeNum = 0;
    float averageValue, averagePositiveValue;
    float positiveSum = 0; float negativeSum = 0;
    x = 0.1;
    int k = 0;
    float arr[100];
    
    //printf("Введите шаг: ");
    //scanf("%f", &dx);
    dx = 0.001;

    printf("__________________________\n");
    printf(" num |%6s%3c|%7s%2c|\n", "x", ' ', "f(x)", ' ');
    printf("__________________________\n");
    for (float i = 0.1; i < 2.100001; i += dx, k++) {
        fx = func_fx(i);
        printf("%4d |%5.5f%2c|%7.3f%2c|\n", k+1, i, ' ', fx, ' ');
        arr[k] = fx;
        if (arr[k] > 0)
        {
            countPositiveNum++;
            positiveSum += arr[k];
        }
        if (arr[k] < 0)
        {
            countNegativeNum++;
            negativeSum += arr[k];
        }
        if (k == arrMax) break;
    }



    float testav = 0;
    for (int i = 0; i <= arrMax; i++)
    {
        printf("Элемент arr[%d] = %f\n", i, arr[i]);
    }

 
    averageValue = (negativeSum + positiveSum) / (countNegativeNum + countPositiveNum);
    averagePositiveValue = positiveSum / countPositiveNum;

    printf("|%-15s|%-35s|%-35s|%-20s|%-20s|%-35s|%-25s|\n",
        "Имя массива",
        "Накопленное значение положительных",
        "Накопленное значение отрицательных",
        "Число положительных",
        "Число отрицательных",
        "Среднее положительных",
        "Среднее всех");

    printf("|%-15s|%-35.2f|%-35.2f|%-20d|%-20d|%-35.6f|%-25.6f|\n",
        "arr",
        positiveSum,
        negativeSum,
        countPositiveNum,
        countNegativeNum,
        averagePositiveValue,
        averageValue);


}

