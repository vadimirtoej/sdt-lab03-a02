#include "metro.h"
#include "line.cc"

// Реализация связного списка:
//struct Node
//{
//    // Узел списка
//    string data;
//    Node* next;
//}

// Основные атрибуты самого списка: указатели на первый и последний элемент. Плюс к этому - размер списка.
//struct List
//{
//    Node* first;
//    Node* last;
//    size_t size;
//}


// Функция добавления элемента в список:
void list_append(List& list, int x)
{
    Node* n = new Node;
    // (*n).data = x;
    n -> data = x;
    n -> next = nullptr;
    if (list.size != 0){
        list.last -> next = n;
    } else {
        list.first = n;
    }
    list.size++;
}


int* list_get(List& list, size_t i)
{
    Node* c = list.first;
    size n = 0;
    while (c != nullptr)
    {
        if (n == i)
           return &c -> data;
        n++;
        c = c -> next;
    }
}

// Инициализация
List* list_init()
{
    List test_list;
    test_list.first = test_list.last = nullptr;
    test_list.size = 0;
    return test_list;
}

int main() 
{
	list_init();
//	Station* station_1;
//	Station* station_2;
//	Station* station_3;
//	station_1.name = "Борисово";
//	station_1.next = *station_2;
//	station_1.line = "Люблинско-Дмитровская"
//	station_2.name = "Шипиловская";
//	station_2.next = *station_3;
//	station_2.line = "Люблинско-Дмитровская"
//	station_3.name = "Зябликово";
//	station_3.next = nullptr;
//	station_3.line = "Люблинско-Дмитровская"
	Line line_1;
	line_1.name = "Люблинско-Дмитровская";
	line_1.next = line_2;
	Line line_2;
	line_1.name = "Кольцевая";
	line_2.next = nullptr;
	Lines* lines_test;
	lines_test.first =
	List* stations_test;
	stations_test.first = *station_1;
	stations_test.last = *station_3;
	find_line()
	return 0;
}