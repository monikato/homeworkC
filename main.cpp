#include <iostream>
#include <cstdlib>
using namespace std;

// Написать следующие функции для работы с динамическим массивом:
//функция распределения динамической памяти +
//функция инициализации динамического массива+
//функция печати динамического массива+
//функцию удаления динамического массива+
//функцию добавления элемента в конец массива+
//функцию добавления элемента на начало массива
//функцию вставки элемента по указанному индексу
//функцию удаления элемента по указанному индексу

//void Memory(int** ptr, int size)
//{
//    *ptr = new int[size];
//}
//
//void Init(int** ptr, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        (*ptr)[i] = rand() % 20;
//    }
//}
//
//void Print (int** ptr, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << (*ptr)[i] << "\t";
//    }
//}
//
//void Delete (int** ptr)
//{
//    delete[]*ptr;
//    *ptr = nullptr;
//}
//
//void AddElementEnd (int** ptr, int&size, int a)
//{
//    int* temp = new int [size+1];
//    for (int i = 0; i < size; i++)
//    {
//        temp[i] = (*ptr)[i];
//    }
//    temp[size] = a;
//    delete[]*ptr;
//    *ptr = temp;
//    size++;
//}
//
//void AddElementStart (int** ptr, int&size, int b)
//{
//    int* temp = new int [size+1];
//    temp[0] = b;
//    for (int i = 0; i < size; i++)
//    {
//        temp[i+1] = (*ptr)[i];
//    }
//    delete[]*ptr;
//    *ptr = temp;
//    size++;
//}
//
//void AddElementIndex(int** ptr, int& size, int x, int index)
//{
//    if (index < 0 || index > size)
//    {
//        cout << "Invalid index" << endl;
//        return;
//    }
//    int* temp = new int[size + 1];
//    for (int i = 0; i < index; i++)
//    {
//        temp[i] = (*ptr)[i];
//    }
//    temp[index] = x;
//    for (int i = index; i < size; i++)
//    {
//        temp[i + 1] = (*ptr)[i];
//    }
//    delete[] *ptr;
//    *ptr = temp;
//    size++;
//}
//
//void DeleteElementIndex(int** ptr, int& size, int index)
//{
//    if (index < 0 || index >= size)
//    {
//        cout << "Invalid index" << endl;
//        return;
//    }
//    int* temp = new int[size - 1];
//    for (int i = 0; i < index; i++)
//    {
//        temp[i] = (*ptr)[i];
//    }
//    for (int i = index + 1; i < size; i++)
//    {
//        temp[i - 1] = (*ptr)[i];
//    }
//    delete[] *ptr;
//    *ptr = temp;
//    size--;
//}
//
//int main()
//{
//    int* arr = nullptr;
//    int size = 5;
//    
//    Memory(&arr, size);
//    Init(&arr, size);
//    cout << "Масив: ";
//    Print(&arr, size);
//    cout << endl;
//    
//    AddElementEnd(&arr, size, 100);
//    cout << "Масив із доданим елементом укінці: ";
//    Print(&arr, size);
//    cout << endl;
//    
//    AddElementStart(&arr, size, 10);
//    cout << "Масив із доданим елементом на початку: ";
//    Print(&arr, size);
//    cout << endl;
//    
//    AddElementIndex(&arr, size, 50, 2);
//    cout << "Масив із доданим елементом по індексу 2: ";
//    Print(&arr, size);
//    cout << endl;
//    
//    DeleteElementIndex(&arr, size, 3);
//    cout << "Масив із видаленим елементом по індексу 3: ";
//    Print(&arr, size);
//    cout << endl;
//    
//    Delete(&arr);
//}









// Написать функцию, которая получает указатель на динамический массив и его размер. Функция должна удалить из массива все отрицательные числа и вернуть указатель на новый динамический массив.
//
//
//void Memory(int** ptr, int size)
//{
//    *ptr = new int[size];
//}
//
//void Init(int** ptr, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        (*ptr)[i] = rand() % 20 - 10;
//    }
//}
//
//void Print(int** ptr, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << (*ptr)[i] << "\t";
//    }
//    cout << endl;
//}
//
//void Delete(int** ptr)
//{
//    delete[] *ptr;
//    *ptr = nullptr;
//}
//
//void DeleteNegElements(int** ptr, int size, int& newSize)
//{
//    newSize = 0;
//    for (int i = 0; i < size; i++)
//    {
//        if ((*ptr)[i] >= 0)
//        {
//            newSize++;
//        }
//    }
//
//    int* newArr = new int[newSize];
//    int j = 0;
//    for (int i = 0; i < size; i++)
//    {
//        if ((*ptr)[i] >= 0)
//        {
//            newArr[j++] = (*ptr)[i];
//        }
//    }
//    delete[] *ptr;
//    *ptr = newArr;
//}
//
//int main()
//{
//    int size = 10;
//    int* arr = nullptr;
//
//    Memory(&arr, size);
//    Init(&arr, size);
//    
//    cout << "Початковий масив: ";
//    Print(&arr, size);
//    cout << endl;
//
//    int newSize;
//    DeleteNegElements(&arr, size, newSize);
//    
//    cout << "Масив без мінусових елементів: ";
//    Print(&arr, newSize);
//    cout << endl;
//    
//    Delete(&arr);
//}









// Даны два массива: А[M] и B[N] (M и  N вводятся с клавиатуры). Необходимо создать третий массив минимально возможного размера, в котором нужно собрать элементы обоих массивов.


//void Memory(int** ptr, int size)
//{
//    *ptr = new int[size];
//}
//
//void Init(int** ptr, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        (*ptr)[i] = rand() % 20;
//    }
//}
//
//void Print(int* ptr, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << ptr[i] << "\t";
//    }
//    cout << endl;
//}
//
//void Delete(int** ptr)
//{
//    delete[] *ptr;
//    *ptr = nullptr;
//}
//
//void ConnectArr(int* A, int M, int* B, int N, int** C, int& sizeC)
//{
//    sizeC = M + N;
//    *C = new int[sizeC];
//    for (int i = 0; i < M; i++)
//    {
//        (*C)[i] = A[i];
//    }
//    for (int i = 0; i < N; i++)
//    {
//        (*C)[M + i] = B[i];
//    }
//}
//
//int main()
//{
//    srand(time(NULL));
//
//    int M, N;
//    cout << "Введіть розмір масиву A: ";
//    cin >> M;
//    cout << "Введіть розмір масиву B: ";
//    cin >> N;
//
//    int* A = nullptr;
//    int* B = nullptr;
//    int* C = nullptr;
//    int sizeC;
//
//    Memory(&A, M);
//    Memory(&B, N);
//
//    Init(&A, M);
//    Init(&B, N);
//
//    cout << "Масив A: ";
//    Print(A, M);
//    cout << endl;
//    
//    cout << "Масив B: ";
//    Print(B, N);
//    cout << endl;
//
//    ConnectArr(A, M, B, N, &C, sizeC);
//    cout << "Об'єднаний масив C: ";
//    Print(C, sizeC);
//    cout << endl;
//
//    Delete(&A);
//    Delete(&B);
//    Delete(&C);
//}









// Даны два массива: А[M] и B[N] (M и  N вводятся с клавиатуры). Необходимо создать третий массив минимально возможного размера, в котором нужно собрать общие элементы двух массивов.


//void Memory(int** ptr, int size)
//{
//    *ptr = new int[size];
//}
//
//void Init(int** ptr, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        (*ptr)[i] = rand() % 20;
//    }
//}
//
//void Print(int* ptr, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << ptr[i] << "\t";
//    }
//    cout << endl;
//}
//
//void Delete(int** ptr)
//{
//    delete[] *ptr;
//    *ptr = nullptr;
//}
//
//void CommonElements(int* A, int M, int* B, int N, int** C, int& sizeC)
//{
//    int* temp = new int[M < N ? M : N];
//    sizeC = 0;
//    
//    for (int i = 0; i < M; i++)
//    {
//        for (int j = 0; j < N; j++)
//        {
//            if (A[i] == B[j])
//            {
//                bool isInArr = false;
//                for (int k = 0; k < sizeC; k++)
//                {
//                    if (temp[k] == A[i])
//                    {
//                        isInArr = true;
//                        break;
//                    }
//                }
//                if (!isInArr)
//                {
//                    temp[sizeC++] = A[i];
//                }
//                break;
//            }
//        }
//    }
//
//    *C = new int[sizeC];
//    for (int i = 0; i < sizeC; i++)
//    {
//        (*C)[i] = temp[i];
//    }
//    delete[] temp;
//}
//
//int main()
//{
//    srand(time(NULL));
//
//    int M, N;
//    cout << "Введіть розмір масиву A: ";
//    cin >> M;
//    cout << "Введіть розмір масиву B: ";
//    cin >> N;
//
//    int* A = nullptr;
//    int* B = nullptr;
//    int* C = nullptr;
//    int sizeC;
//
//    Memory(&A, M);
//    Memory(&B, N);
//
//    Init(&A, M);
//    Init(&B, N);
//
//    cout << "Масив A: ";
//    Print(A, M);
//    cout << endl;
//    
//    cout << "Масив B: ";
//    Print(B, N);
//    cout << endl;
//
//    CommonElements(A, M, B, N, &C, sizeC);
//    if (sizeC > 0)
//    {
//        cout << "Спільні елементи (масив C): ";
//        Print(C, sizeC);
//    }
//    else
//    {
//        cout << "Спільних елементів немає." << endl;
//    }
//    
//    Delete(&A);
//    Delete(&B);
//    Delete(&C);
//}











// Даны два массива: А[M] и B[N] (M и  N вводятся с клавиатуры). Необходимо создать третий массив минимально возможного размера, в котором нужно собрать элементы массива A, которые не включаются в массив B.

void Memory(int** ptr, int size)
{
    *ptr = new int[size];
}

void Init(int** ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        (*ptr)[i] = rand() % 20;
    }
}

void Print(int* ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << "\t";
    }
    cout << endl;
}

void Delete(int** ptr)
{
    delete[] *ptr;
    *ptr = nullptr;
}

void ExclusiveElements(int* A, int M, int* B, int N, int** C, int& sizeC)
{
    int* temp = new int[M];
    sizeC = 0;

    for (int i = 0; i < M; i++)
    {
        bool found = false;
        for (int j = 0; j < N; j++)
        {
            if (A[i] == B[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            temp[sizeC++] = A[i];
        }
    }

    *C = new int[sizeC];
    for (int i = 0; i < sizeC; i++)
    {
        (*C)[i] = temp[i];
    }
    delete[] temp;
}

int main()
{
    srand(time(NULL));

    int M, N;
    cout << "Введіть розмір масиву A: ";
    cin >> M;
    cout << "Введіть розмір масиву B: ";
    cin >> N;

    int* A = nullptr;
    int* B = nullptr;
    int* C = nullptr;
    int sizeC;

    Memory(&A, M);
    Memory(&B, N);

    Init(&A, M);
    Init(&B, N);

    cout << "Масив A: ";
    Print(A, M);
    cout << endl;
    
    cout << "Масив B: ";
    Print(B, N);
    cout << endl;

    ExclusiveElements(A, M, B, N, &C, sizeC);
    if (sizeC > 0)
    {
        cout << "Елементи масиву A, яких немає в масиві B (масив C): ";
        Print(C, sizeC);
    }
    else
    {
        cout << "Елементів з А, які не включені в В, немає." << endl;
    }

    Delete(&A);
    Delete(&B);
    Delete(&C);
}

