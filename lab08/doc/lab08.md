###Лабораторна робота №8
##Вступ до документації коду
##1. Вимоги
#1.1 Розробник
* Науменко Андрій Олександрович;
* студента групи КІТ – 321а;
* 22.12.2021.
##1.2 Індивідуальне завдання
* Для лабораторної роботи “Функції” необхідно додати можливість генерації Doxygenдокументації.
##2.Опис роботи
* 1.Просте число
```c
#include <stdio.h>
 #include <stdbool.h>
 #include <stdlib.h>
/**
 * Визначає просте число чи ні
*/
bool IsPrime(int n)
{
/**
 * Якщо число > 1(за визначенням простого числа),то воно іде в цей цикл
*/
 if (n > 1)
 {
  for (int i = 2; i < n; i++)
   if (n % i == 0)
/**
 * Якщо задане число ділиться націло на дільник від 2 до <n, то функції вертається значення false
*/
    return false;
  for(int i = 2; i < n; i++)
  if (n % i != 0)
/**
 * Якщо задане число не ділиться націло на дільник від 2 до <n, то функції вертається значення true
*/
    return true;
 }
 else
/**
 * Якщо ж введене число менше за 1,то функції вертається значення false
*/
  return false;
 return 0;
}


int main()
{
 int n = 5;
/**
 * Введене число
*/
 printf("result:%d\n", IsPrime(n));
/**
 * Виведення результата
*/
2.Масиви
int a = 10;
/**
 *Розмір масиву
*/
 int arr[a][a]; /**
    * Початковий масив
   */
 int arr2[a][a]; /**
    * Результуючий масив
   */
 for(int i = 0; i < a; i++) /**
      * Цикли для Перерахування строк та стовпців матриці
     */ 
 {
  for(int j= 0;j < a; j++)
  {
   arr[i][j] = rand()%10; /**
       * Наповнення матриці рандомними числами
      */
    matrix(a, arr, arr2); /**
        * Виклик функції
       */
   }
  }
 return 0;
}
/**
 * Функція яка вираховує результат множення матриць розмуру а
*/
void matrix(int a,int arr[a][a], int arr2[a][a])
{
 for(int i = 0; i < a; i++)
 /**
  * Перерахунок стовпчиків та строк
 */
 {
  for(int j = 0; j < a; j++)
  {
    arr2[i][j]= 0;
    /**
     * Кладем якесь значення в результат до обчислення
    */
   for(int l = 0; l < a; l++)
   {
    arr2[i][j] +=  arr[i][l] * arr[l][j];
    /**
     * Формула для множення матриць
    */
    }
   }
  }
 ```