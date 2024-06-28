#include <iostream>
using namespace std;

// добавить в класс "Односвязный список" следующие функции :
// удаление элемента по заданной позиции,
// удаление последнего элемента,
// поиск заданного элемента(функция возвращает позицию найденного элемента в случае успеха или NULL в случае неудачи).


struct Element
{
    // Данные
    char data;
    // Адрес следующего элемента списка
    Element* Next;
};

// Односвязный список
class List
{
    // Адрес головного элемента списка
    Element* Head;
    // Адрес головного элемента списка
    Element* Tail;
    //  Количество элементов списка
    int Count;

public:
    //  Конструктор
    List();
    // Деструктор
    ~List();

    // Добавление элемента в список
    // Новый элемент становится последним)
    void Add(char data);

    // Удаление элемента списка
    // Удаляется головной элемент)
    void Del();
    
    // Удаление всего списка
    void DelAll();

    // Распечатка содержимого списка
    // (Распечатка начинается с головного элемента)
    void Print();

    // Получение количества элементов, находящихся в списке
    int GetCount();

    void AddIndex(char data, int index)// Z, 2
    {
        Element* temp = Head;
        int i = 1;
        while (i < index)
        {
            temp = temp->Next;
            i++;
        }
        Element* NewNode = new Element;
        NewNode->data = data;

        // настройка связей
        NewNode->Next = temp->Next;
        temp->Next = NewNode;
    }
    
    // ДЗ. ВИДАЛЕННЯ ЕЛЕМЕНТА ПО ЗАДАНІЙ ПОЗИЦІЇ
    
    void DelIndex(int index)
    {
      Element* prevdel = Head;
      int i = 1;
      while (i<index-1)
      {
        prevdel = prevdel->Next;
        i++;
      }
      Element* del = prevdel->Next;
      prevdel->Next = del->Next;
      delete del;
    }
    
    // ДЗ. ВИДАЛЕННЯ ОСТАННЬОГО ЕЛЕМЕНТА
    
    void DelLast()
    {
        Element* temp = Head;
            while (temp->Next != Tail)
            {
                temp = temp->Next;
            }

            delete Tail;
            Tail = temp;
            Tail->Next = nullptr;
            Count--;
    }
    
    
    // ДЗ. ПОШУК ЕЛЕМЕНТА
    
    void Search(char data, int* position)
    {
        Element* temp = Head;
            int pos = 0;
            while (temp != nullptr)
            {
                if (temp->data == data)
                {
                    *position = pos;
                    return;
                }
                temp = temp->Next;
                pos++;
            }
            *position = -1;
    }
    
};

List::List()
{
    // Изначально список пуст
    Head = Tail = NULL;
    Count = 0;
}

List::~List()
{
    // Вызов функции удаления
    DelAll();
}

int List::GetCount()
{
    // Возвращаем количество элементов
    return Count;
}

void List::Add(char data)
{
    // Создание нового элемента
    Element* temp = new Element;

    // заполнение данными
    temp->data = data;
    // следующий элемент отсутствует
    temp->Next = NULL;
    // новый элемент становится последним элементом списка
    // если он не первый добавленный
    if (Head != NULL)
    {
        Tail->Next = temp;
        Tail = temp;
    }
    // новый элемент становится единственным
    // если он первый добавленный
    else
    {
        Head = Tail = temp;
    }
}

void List::Del()
{
    // запоминаем адрес головного элемента
    Element* temp = Head;
    // перебрасываем голову на следующий элемент
    Head = Head->Next;
    // удаляем бывший головной элемент
    delete temp;
}

void List::DelAll()
{
    // Пока еще есть элементы
    while (Head != 0)
        // Удаляем элементы по одному
        Del();
}

void List::Print()
{
    // запоминаем адрес головного элемента
    Element* temp = Head;
    // Пока еще есть элементы
    while (temp != 0)
    {
        // Выводим данные
        cout << temp->data << " ";
        // Переходим на следующий элемент
        temp = temp->Next;
    }

    cout << "\n\n";
}

// Тестовый пример
int main()
{
    // Создаем объект класса List
    List lst;
    lst.Add('A');
    lst.Add('B');
    lst.Add('C');
    lst.Add('D');
    lst.Add('E');
    lst.Add('F');
    lst.Print();

    lst.AddIndex('Z', 2);
    lst.Print();
    
    lst.DelIndex(3);
    lst.Print();
    
    lst.DelLast();
    lst.Print();
    
    int position;
    lst.Search('D', &position);
    if (position != -1)
       {
           cout << "Position is: " << position << endl;
       }
       else
       {
           cout << "Not found" << endl;
       }
    
}
