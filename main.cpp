#include <iostream>
using namespace std;

// Задание 1. Написать функцию, добавляющую столбец двухмерному массиву в указанную позицию.


//void AddCol(int*** ptr3, int str, int& col, int colIndex)
//{
//    int** temp = new int*[str];
//    for (int i = 0; i < str; i++)
//    {
//        temp[i] = new int[col + 1];
//    }
//
//    for (int i = 0; i < str; i++)
//    {
//        int k = 0;
//        for (int j = 0; j < col + 1; j++)
//        {
//            if (j == colIndex)
//            {
//                temp[i][j] = 0;
//            }
//            else
//            {
//                temp[i][j] = (*ptr3)[i][k];
//                k++;
//            }
//        }
//    }
//
//    for (int i = 0; i < str; i++)
//    {
//        delete[] (*ptr3)[i];
//    }
//    delete[] *ptr3;
//
//    *ptr3 = temp;
//    col++;
//}
//
//
//int main()
//{
//    int str, col;
//    cout << "Enter str -> ";
//    cin >> str;
//    cout << "Enter col -> ";
//    cin >> col;
//    
//    int** ptr2 = new int*[str];
//    for (int i = 0; i < str; i++)
//    {
//        ptr2[i] = new int[col];
//    }
//    
//    for (int i = 0; i < str; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            ptr2[i][j] = rand() % 41 - 20;
//        }
//    }
//
//    for (int i = 0; i < str; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            cout << ptr2[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    cout << endl;
//        
//        
//        int colIndex;
//        cout << "Enter column index -> ";
//        cin >> colIndex;
//        
//        AddCol(&ptr2, str, col, colIndex);
//        for (int i = 0; i < str; i++)
//        {
//            for (int j = 0; j < col; j++)
//            {
//                cout << ptr2[i][j] << "\t";
//            }
//            cout << endl;
//        }
//        cout << endl;
//            
//            
//        for (int i = 0; i < str; i++)
//        {
//            delete[] ptr2[i];
//        }
//        delete[] ptr2;
//}











// Задание 2. Написать функцию, удаляющую столбец двух- мерного массива по указанному номеру.


//void DelCol(int*** ptr, int str, int& cols, int colIndex)
//{
//    int** temp = new int*[str];
//    for (int i = 0; i < str; i++)
//    {
//        temp[i] = new int[cols - 1];
//    }
//
//    for (int i = 0; i < str; i++)
//    {
//        int k = 0;
//        for (int j = 0; j < cols; j++)
//        {
//            if (j != colIndex)
//            {
//                temp[i][k] = (*ptr)[i][j];
//                k++;
//            }
//        }
//    }
//
//    for (int i = 0; i < str; i++)
//    {
//        delete[] (*ptr)[i];
//    }
//    delete[] *ptr;
//
//    *ptr = temp;
//    cols--;
//}
//
//int main()
//{
//    int str, cols;
//    cout << "Enter str -> ";
//    cin >> str;
//    cout << "Enter cols -> ";
//    cin >> cols;
//
//    // Создание и инициализация матрицы
//    int** ptr = new int*[str];
//    for (int i = 0; i < str; i++)
//    {
//        ptr[i] = new int[cols];
//    }
//
//    for (int i = 0; i < str; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            ptr[i][j] = rand() % 41 - 20;
//        }
//    }
//
//    for (int i = 0; i < str; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            cout << ptr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    cout << endl;
//
//    int colIndex;
//    cout << "Enter column index to delete -> ";
//    cin >> colIndex;
//    
//    DelCol(&ptr, str, cols, colIndex);
//    for (int i = 0; i < str; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            cout << ptr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    cout << endl;
//
//    for (int i = 0; i < str; i++)
//    {
//        delete[] ptr[i];
//    }
//    delete[] ptr;
//}













// Задание 3. Дана матрица порядка M×N (M строк, N столб- цов). Необходимо заполнить ее значениями и написать функцию, осуществляющую циклический сдвиг строк и/или столбцов массива указанное количество раз и в ука- занную сторону.


void ShiftStr(int** ptr, int str, int cols, int shiftCount, bool direction)
{
    for (int s = 0; s < shiftCount; s++)
    {
        if (direction)
        {
            int* temp = ptr[str - 1];
            for (int i = str - 1; i > 0; i--)
            {
                ptr[i] = ptr[i - 1];
            }
            ptr[0] = temp;
        }
        else
        {
            int* temp = ptr[0];
            for (int i = 0; i < str - 1; i++)
            {
                ptr[i] = ptr[i + 1];
            }
            ptr[str - 1] = temp;
        }
    }
}

void ShiftCols(int** ptr, int str, int cols, int shiftCount, bool direction)
{
    for (int s = 0; s < shiftCount; s++)
    {
        if (direction)
        {
            for (int i = 0; i < str; i++)
            {
                int temp = ptr[i][cols - 1];
                for (int j = cols - 1; j > 0; j--)
                {
                    ptr[i][j] = ptr[i][j - 1];
                }
                ptr[i][0] = temp;
            }
        }
        else
        {
            for (int i = 0; i < str; i++)
            {
                int temp = ptr[i][0];
                for (int j = 0; j < cols - 1; j++)
                {
                    ptr[i][j] = ptr[i][j + 1];
                }
                ptr[i][cols - 1] = temp;
            }
        }
    }
}

int main()
{
    int str, cols;
    cout << "Enter str -> ";
    cin >> str;
    cout << "Enter cols -> ";
    cin >> cols;

    int** ptr = new int*[str];
    for (int i = 0; i < str; i++)
    {
        ptr[i] = new int[cols];
    }

    for (int i = 0; i < str; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            ptr[i][j] = rand() % 41 - 20;
        }
    }

    for (int i = 0; i < str; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << ptr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    int shiftCount;
    char direction;
    cout << "Enter shift count -> ";
    cin >> shiftCount;
    cout << "Enter direction (u = up, d = down, l = left, r = right) -> ";
    cin >> direction;

    switch (direction)
    {
        case 'u':
            ShiftStr(ptr, str, cols, shiftCount, false);
            break;
        case 'd':
            ShiftStr(ptr, str, cols, shiftCount, true);
            break;
        case 'l':
            ShiftCols(ptr, str, cols, shiftCount, false);
            break;
        case 'r':
            ShiftCols(ptr, str, cols, shiftCount, true);
            break;
        default:
            cout << "Error" << endl;
            return 1;
    }

    for (int i = 0; i < str; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << ptr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < str; i++)
    {
        delete[] ptr[i];
    }
    delete[] ptr;

}
