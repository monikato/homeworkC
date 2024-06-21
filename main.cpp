#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    
    // Задание 1. Написать функцию, которая удаляет из строки символ с заданным номером.
    {
        char* str = new char[50];
        cout << "Введіть рядок: ";
        cin.getline(str, 50);
        int index;
        cout << "Введіть індекс для видалення: ";
        cin >> index;
        cin.ignore();
        int len = strlen(str);
        if (index >= 0 && index < len)
        {
            for (int i = index; i < len - 1; i++)
            {
                str[i] = str[i + 1];
            }
            str[len - 1] = '\0';
        }
        cout << "Результат: " << str << endl;
        delete[] str;
    }

    // Задание 2. Написать функцию, которая удаляет из строки все вхождения в нее заданного символа.
    {
        char* str = new char[50];
        cout << "Введіть рядок: ";
        cin.getline(str, 50);
        char ch;
        cout << "Введіть символ для видалення: ";
        cin >> ch;
        cin.ignore();
        int len = strlen(str);
        int j = 0;
        for (int i = 0; i < len; i++)
        {
            if (str[i] != ch)
            {
                str[j++] = str[i];
            }
        }
        str[j] = '\0';
        cout << "Результат: " << str << endl;
        delete[] str;
    }

    // Задание 3. Написать функцию, которая вставляет в строку в указанную позицию заданный символ.
    {
        char* str = new char[50];
        cout << "Введіть рядок: ";
        cin.getline(str, 50);
        int index;
        char ch;
        cout << "Введіть індекс для вставки: ";
        cin >> index;
        cout << "Введіть символ для вставки: ";
        cin >> ch;
        cin.ignore();
        int len = strlen(str);
        if (index >= 0 && index <= len)
        {
            for (int i = len; i >= index; i--)
            {
                str[i + 1] = str[i];
            }
            str[index] = ch;
        }
        cout << "Результат: " << str << endl;
        delete[] str;
    }

    // Задание 4. Написать программу, которая заменяет все символы точки «.» в строке, введенной пользователем, на символы восклицательного знака «!».
    {
        char* str = new char[50];
        cout << "Введіть рядок: ";
        cin.getline(str, 50);
        int len = strlen(str);
        for (int i = 0; i < len; i++)
        {
            if (str[i] == '.')
            {
                str[i] = '!';
            }
        }
        cout << "Результат: " << str << endl;
        delete[] str;
    }

    // Задание 5. Пользователь вводит строку символов и ис- комый символ, посчитать сколько раз он встречается в строке.
    {
        char* str = new char[50];
        cout << "Введіть рядок: ";
        cin.getline(str, 50);
        char ch;
        cout << "Введіть символ для підрахунку: ";
        cin >> ch;
        cin.ignore();
        int count = 0;
        int len = strlen(str);
        for (int i = 0; i < len; i++)
        {
            if (str[i] == ch)
            {
                ++count;
            }
        }
        cout << "Символ '" << ch << "' зустрічається " << count << " раз(ів)." << endl;
        delete[] str;
    }

    // Задание 6. Пользователь вводит строку. Определить ко- личество букв, количество цифр и количество остальных символов, присутствующих в строке.
    {
        char* str = new char[50];
        cout << "Введіть рядок: ";
        cin.getline(str, 50);
        int letters = 0, digits = 0, others = 0;
        int len = strlen(str);
        for (int i = 0; i < len; i++)
        {
            if (isalpha(str[i]))
            {
                ++letters;
            }
            else if (isdigit(str[i]))
            {
                ++digits;
            }
            else
            {
                ++others;
            }
        }
        cout << "Кількість букв: " << letters << endl;
        cout << "Кількість цифр: " << digits << endl;
        cout << "Кількість інших символів: " << others << endl;
        delete[] str;
    }
}

