//#include <iostream>
//#include <vector>
//
//using namespace std;
//using Predicate = bool(int);
//
//vector<int> filter(const vector<int>& xs,  Predicate p){
//    vector<int> result;
//    for(const int &x:xs) {
//        if (p(x))
//            result.push_back(x);
//    }
//    return result;
//}
//
//
//bool is_even(int x)
//{
//    return x % 2 == 0;
//}
//
//
//bool is_odd(int x)
//{
//    return !is_even(x);
//}
//
//
///*
//struct Image{...};
//Image* load_image(string path)
//{
//// New - указатель динамической памяти:
//    Image* image = new Image;
//// Delete - очищение ячейки памяти с указанным адресом:
//    delete x;
//}
//*/
//
//// Реализация связного списка:
//struct Node
//{
//    // Узел списка
//    int data;
//    Node* next;
//}
//
//// Основные атрибуты самого списка: указатели на первый и последний элемент. Плюс к этому - размер списка.
//struct List
//{
//    //
//    Node* first;
//    Node* last;
//    size_t size;
//}
//
//// Инициализация
//List list_init()
//{
//    List list;
//    list.first = list.last = nullptr;
//    list.size = 0;
//    return list;
//}
//
//// Функция добавления элемента в список:
//void list_append(List& list, int x)
//{
//    Node* n = new Node;
//    // (*n).data = x;
//    n -> data = x;
//    n -> next = nullptr;
//    if (list.size != 0){
//        list.last -> next = n;
//    } else {
//        list.first = n;
//    }
//    list.size++;
//}
//
//
//int* list_get(List& list, size_t i)
//{
//    Node* c = list.first;
//    size n = 0;
//    while (c != nullptr)
//    {
//        if (n == i)
//           return &c -> data;
//        n++;
//        c = c -> next;
//    }
//}
//
//int main() {
//    // Указатель:
//    int x = 1;
//    int *p = &x;
//    // Вывод самого адреса и переменной, на которую мы указываем.
//    cout << x << '\n' << p << '\n' << *p << '\n';
//    // Нулевой указатель, для инициализации указателей:
//    int *c = nullptr;
//    // Так делать нельзя, будет ошибка: cout << *c;
////    vector<int> xs ={1, 2};
////    auto f = filter(xs, is_even);
//    return 0;
//}