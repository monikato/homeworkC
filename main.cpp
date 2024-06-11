
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

//void Rezult (int arr[], int size, int* negNumber, int* posNumber, int* zeroNumber)
//{
//    for (int i=0; i <size; i++)
//    {
//        if (arr[i] < 0)
//        {
//            (*negNumber)++;
//        }
//        else if (arr[i] > 0)
//        {
//            (*posNumber)++;
//        }
//        else
//        {
//            (*zeroNumber)++;
//        }
//    }
//}
//
//int main()
//{
//    int arr[] {-1, 4, 7, 0, 4, -2};
//    for (int i = 0; i < 6; i++)
//    {
//        cout<< *(arr+i)<< "\t";
//    }
//    cout << endl;
//    
//    int negNumber = 0, posNumber = 0, zeroNumber = 0;
//    
//    Rezult(arr, 6, &negNumber, &posNumber, &zeroNumber);
//    
//    cout << "Кількість мінусових елементів = " << negNumber << endl;
//    cout << "Кількість плюсових елементів = " << posNumber << endl;
//    cout << "Кількість нульових елементів = " << zeroNumber << endl;
//}






// 3. Написать функцию, которая получает указатель на двумерный массив и его размер, и возвращает среднее арифметическое элементов массива, а также количество чётных и нечётных элементов.


//void Rezult(int arr[3][5], int rows, int cols, double* average, int* evenNumber, int* oddNumber)
//{
//    int sum = 0;
//    int total = rows * cols;
//    *evenNumber = 0;
//    *oddNumber = 0;
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            sum += arr[i][j];
//            if (arr[i][j] % 2 == 0)
//            {
//                (*evenNumber)++;
//            }
//            else
//            {
//                (*oddNumber)++;
//            }
//        }
//    }
//    *average = sum / total;
//}
//
//int main()
//{
//    const int rows = 3;
//    const int cols = 5;
//
//    int arr[rows][cols];
//
//    int counter = 1;
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            arr[i][j] = counter++;
//        }
//    }
//
//    cout << "Масив:" << endl;
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            cout << arr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//
//    double average;
//    int evenNumber, oddNumber;
//
//    Rezult(arr, rows, cols, &average, &evenNumber, &oddNumber);
//
//    cout << "Середнє арифметичне = " << average << endl;
//    cout << "Кількість парних елементів = " << evenNumber << endl;
//    cout << "Кількість непарних елементів = " << oddNumber << endl;
//
//}





// 4.    Написать функцию, принимающую в качестве аргумента, указатели на два массива (А и В) и размеры массивов. Функция проверяет, является ли массив В подмножеством массива А и возвращает указатель на начало найденного фрагмента, если элемента нет, воз-вращает 0.


void Rezult(int* A, int sizeA, int* B, int sizeB, int** rez)
{
    *rez = nullptr;
    
    if (sizeB > sizeA)
    {
        return;
    }

    for (int i = 0; i <= sizeA - sizeB; i++)
    {
        bool found = true;
        for (int j = 0; j < sizeB; j++)
        {
            if (A[i + j] != B[j])
            {
                found = false;
                break;
            }
        }
        if (found)
        {
            *rez = &A[i];
            return;
        }
    }
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int B[] = {4, 5, 6};

    int sizeA = 9;
    int sizeB = 3;

    int* rez = nullptr;

    Rezult(A, sizeA, B, sizeB, &rez);
    
    if (rez != nullptr)
    {
        cout << "Масив є підмножиною масиву A, починаючи з елемента: " << (rez - A) << endl;
    }
    else
    {
        cout << "Масив не є підмножиною масиву A." << endl;
    }

}
