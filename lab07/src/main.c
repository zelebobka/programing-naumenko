#define N 5
#define N2 8
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool IsPrime(int n)
{
	if (n > 1)
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
				return false;
			else
				return true;
		}
	}
	else
		return false;
	return 0;
}
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
