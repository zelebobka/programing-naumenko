/** Константа N отвечает за размерность квадратных матриц */
#define N 5
/** Константа N2 отвечает за размерность одномерных матриц */
#define N2 8

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool IsPrime(int n)
/** IsPrime Визначає просте число чи нi */
{
/**
 * Якщо число > 1(за визначенням простого числа),то воно іде в цей цикл
*/
	if (n > 1)
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
/**
 * Якщо задане чисlо ділиться націло на дільник від 2 до <n, то функції вертається значення false
*/
				return false;
			else
/**
 * Якщо задане число не ділиться націло на дільник від 2 до <n, то функції вертається значення true
*/
				return true;
		}
	}
	else
/**
 * Якщо ж введене число менше за 1,то функції вертається значення false
*/
		return false;
	return 0;
}
/** Функция matrix отвечает за перемножение двоичной матрицы размера N на N саму на себя
На вход идет одномерный массив, далее идет перевод в двухмерный. На выходе получаем одномерный массив. */
void matrix(int p[])
{
    int mas1[N][N];
    int counter = 0;
    for (int i=0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mas1[i][j] = p[counter];
            counter++;
        }
    }
    counter = 0;
    int mas2[N][N];
    int numb = 0;
    int j1 = 0;
    for (int g = 0; g < N; g++){
        j1 = 0;
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){

                numb += mas1[g][j] * mas1[j][j1];
            }
            mas2[g][i] = numb;
            j1++;
            numb = 0;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            p[counter] = mas2[i][j];
            counter++;
        }
    }

}

int main()
{
	int n = 5;
	bool result = IsPrime(n);
	int arr[N2];
	for (int i = 0; i < N2; i++)
	{
        	int fill = rand() % 10;
        	arr[i] = fill;
    	}
	matrix(arr);
	return 0;
}
