#include <iostream>
#include <cstring>
using namespace std;

// Задание 1. Описать структуру Student (фамилия, группа, успеваемость (массив из 5 int)). Создать массив студентов и написать программу, позволяющую:
// Динамически изменять размер массива;
// Выводить список отличников (>75% отличных оценок);
// Выводить список двоечников (>50% оценок 2 и 3).

struct Student
{
    char* LastName;
    char group[10];
    int* grades;
};
    
    void Init (Student &obj)
    {
        char buff[50];
        cout << "Enter Last Name -> ";
        cin.ignore();
        cin.getline(buff, 50);
        
        obj.LastName = new char[strlen(buff) +1];
        strcpy(obj.LastName, buff);
        
        cout << "Enter group -> ";
        cin.getline(obj.group, 10);
        
        obj.grades = new int [5];
        cout << "Enter grades -> ";
        for (int i = 0; i < 5; i++)
        {
            cin >> obj.grades[i];
        }
    }
    
    void Print (const Student& obj)
    {
        cout << "Last Name -> " << obj.LastName << endl;
        cout << "Group -> " << obj.group << endl;
        cout << "Grades -> ";
        for (int i = 0; i < 5; i++)
        {
            cout << obj.grades[i] << " ";
        }
        cout << endl;
    }
    
    void Delete(Student &obj)
    {
        delete[] obj.LastName;
        delete[] obj.grades;
    }
    
    bool isGood(const Student& obj)
    {
        int count = 0;
        for (int i = 0; i < 5; i++)
        {
            if (obj.grades[i] >=4)
            {
                count++;
            }
        }
        return (count > 3);
    }
    
    bool isBad(const Student& obj)
    {
        int count = 0;
        for (int i = 0; i < 5; i++)
        {
            if (obj.grades[i] <=3)
            {
                count++;
            }
        }
        return (count > 2);
    }

void InputStudents(Student* students, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Information about student -> " << i + 1 << endl;
        Init(students[i]);
    }
}

void PrintGoodStudents(Student* students, int size)
{
    cout << "\n Good students:" << endl;
    for (int i = 0; i < size; i++)
    {
        if (isGood(students[i]))
        {
            Print(students[i]);
        }
    }
}

void PrintBadStudents(Student* students, int size)
{
    cout << "\nBad students:" << endl;
    for (int i = 0; i < size; i++)
    {
        if (isBad(students[i]))
        {
            Print(students[i]);
        }
    }
}

void DeleteStudents(Student* students, int size)
{
    for (int i = 0; i < size; i++)
    {
        Delete(students[i]);
    }
}
    
    int main()
{
        int size;
        cout << "Number of Students -> ";
        cin >> size;
        
        Student* students = new Student[size];
        
        InputStudents(students, size);
        PrintGoodStudents(students, size);
        PrintBadStudents(students, size);
        DeleteStudents(students, size);
        
        delete[] students;
        
        return 0;
    }
    


