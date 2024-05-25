#include <iostream>
using namespace std;

//Тема: введение в объектно-ориентированное программирование. Знакомство с классами.
// Задание 1
// Реализуйте класс Дробь. Необходимо хранить числитель и знаменатель в качестве полей класса. Реализуйте методы для ввода данных , для выполнения арифметических операций (сложение, вычитание, умножение, деление, и т.д.) и для вывода данных.

class Fraction {
private:
    int num;
    int denom;

public:
    Fraction(int n = 0, int d = 1) : num(n), denom(d) {
        if (denom == 0)
        {
            cout << "Знаменник не може мати нульове значення" << endl;
            denom = 1;
        }
    }

    void input() {
        cout << "Введіть чисельник: ";
        cin >> num;
        cout << "Введіть знаменник: ";
        cin >> denom;
        if (denom == 0)
        {
            cout << "Знаменник не може мати нульове значення" << endl;
            denom = 1;
        }
    }

    void output() const {
        if (denom == 1)
        {
            cout << num;
        }
        else if (num == 0)
        {
            cout << 0;
        }
        else
        {
            cout << num << "/" << denom;
        }
    }

    Fraction add(const Fraction &other) const {
        int new_num = num * other.denom + other.num * denom;
        int new_denom = denom * other.denom;
        return Fraction(new_num, new_denom);
    }

    Fraction subtract(const Fraction &other) const {
        int new_num = num * other.denom - other.num * denom;
        int new_denom = denom * other.denom;
        return Fraction(new_num, new_denom);
    }

    Fraction multiply(const Fraction &other) const {
        int new_num = num * other.num;
        int new_denom = denom * other.denom;
        return Fraction(new_num, new_denom);
    }

    Fraction divide(const Fraction &other) const {
        if (other.num == 0) {
            cout << "Помилка: Ділити на нуль не можна" << endl;
            return *this;
        }
        int new_num = num * other.denom;
        int new_denom = denom * other.num;
        return Fraction(new_num, new_denom);
    }
};

int main()
{
    Fraction f1, f2;

    cout << "Перший дроб->\n";
    f1.input();

    cout << "Другий дроб->\n";
    f2.input();

    Fraction sum = f1.add(f2);
    Fraction diff = f1.subtract(f2);
    Fraction prod = f1.multiply(f2);
    Fraction quot = f1.divide(f2);

    cout << "Сума: ";
    sum.output();
    cout << endl;

    cout << "Різниця: ";
    diff.output();
    cout << endl;

    cout << "Добуток: ";
    prod.output();
    cout << endl;

    cout << "Частка: ";
    quot.output();
    cout << endl;

    return 0;
}

