
#include <iostream>
using namespace std;

// 1. Написать функцию, которая получает указатель на массив и его размер, и возвращает сумму и произведение его элементов в двух параметрах-указателях.


//void Rezult (int arr[], int size, int* sum, int* prod)
//{
//    for (int i=0; i <size; i++)
//    {
//        (*sum) += arr[i];
//        (*prod) *= arr[i];
//    }
//}
//
//int main()
//{
//    int arr[5] {-1, 4, 7, 4, -2};
//    for (int i = 0; i < 5; i++)
//    {
//        cout<< *(arr+i)<< "\t";
//    }
//    cout << endl;
//    
//    int sum = 0, prod = 1;
//    
//    Rezult (arr, 5, &sum, &prod);
//    
//    cout << "Сума = " << sum << endl;
//    cout << "Добуток = " << prod << endl;
//}


// 2.    Написать функцию, которая получает указатель на массив и его размер, и возвращает количество отрицательных, положительных и нулевых элементов массива.

void Rezult (int arr[], int size, int* negNumber, int* posNumber, int* zeroNumber)
{
    for (int i=0; i <size; i++)
    {
        if (arr[i] < 0)
        {
            (*negNumber)++;
        }
        else if (arr[i] > 0)
        {
            (*posNumber)++;
        }
        else
        {
            (*zeroNumber)++;
        }
    }
}

int main()
{
    int arr[] {-1, 4, 7, 0, 4, -2};
    for (int i = 0; i < 6; i++)
    {
        cout<< *(arr+i)<< "\t";
    }
    cout << endl;
    
    int negNumber = 0, posNumber = 0, zeroNumber = 0;
    
    Rezult(arr, 6, &negNumber, &posNumber, &zeroNumber);
    
    cout << "Кількість мінусових елементів = " << negNumber << endl;
    cout << "Кількість плюсових елементів = " << posNumber << endl;
    cout << "Кількість нульових елементів = " << zeroNumber << endl;
}


// Написать функцию, которая получает указатель на двумерный массив и его размер, и возвращает среднее арифметическое элементов массива, а также количество чётных и нечётных элементов.
