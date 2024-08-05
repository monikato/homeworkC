#include <iostream>
#include <string>
#include <cctype>

using namespace std;


// Создать программу, фильтрующую текст, введенный с клавиатуры. Задача программы заключается в считывании текста и отображении его на экране, используя замену заданного набора символов на пробелы.
// Программа должна предлагать следующие варианты наборов символов для фильтрации:
// Символы латинского алфавита;
 // Символы кириллицы;
// Символы пунктуации;
// Цифры.



void filterText(string &text, bool Latin, bool Cyrillic, bool Punctuation, bool Digits)
{
    for (size_t i = 0; i < text.length(); i++)
    {
        if ((Latin && isalpha(text[i]) && text[i] < 128) ||
            (Cyrillic && isalpha(text[i]) && text[i] >= 128) ||
            (Punctuation && ispunct(text[i])) ||
            (Digits && isdigit(text[i])))
        {
            text[i] = ' ';
        }
    }
}

void chooseFilters(bool &Latin, bool &Cyrillic, bool &Punctuation, bool &Digits, bool &filter)
{
    char choice;
    cout << "Оберіть фільтр:\n";
    cout << "1. Символи латинського алфавіту\n";
    cout << "2. Символи кирилиці\n";
    cout << "3. Символи пунктуації\n";
    cout << "4. Цифри\n";
    cout << "0. - для завершення вибору фільтрів\n";
    cout << "Уведіть ваш вибір: ";
    cin >> choice;
    cin.ignore();

    switch (choice)
    {
        case '1':
            Latin = true;
            filter = true;
            break;
            
        case '2':
            Cyrillic = true;
            filter = true;
            break;
                
        case '3':
            Punctuation = true;
            filter = true;
            break;
                
        case '4':
            Digits = true;
            filter = true;
            break;
            
        case '0':
            return;
            
        default:
            cout << "Помилка\n";
            break;
        }
    
    chooseFilters(Latin, Cyrillic, Punctuation, Digits, filter);
}

int main()
{
    string text;
    cout << "Уведіть текст: ";
    getline(cin, text);

    bool Latin = false;
    bool Cyrillic = false;
    bool Punctuation = false;
    bool Digits = false;
    bool filter = false;

    chooseFilters(Latin, Cyrillic, Punctuation, Digits, filter);
   
    if (filter)
    {
        filterText(text, Latin, Cyrillic, Punctuation, Digits);
        cout << "Відфільтрований текст: " << text << endl;
    }
    else
    {
        cout << "Фільтр не вибрано";
    }
    
    return 0;
}
