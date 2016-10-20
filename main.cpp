#include <iostream>
#include "metro.h"
#include "line.cc"

using namespace std;

int main(int argc, char **argv)
{
    Line* line_1 = new Line;
    Line* line_2 = new Line;
    line_1 -> name = "Lublinsko-Dmitrovskaya";
    line_1 -> next = line_2;
    line_2 -> name = "Koltsevaya";
    line_2 -> next = nullptr;
    Lines* lines_test = new Lines;
    lines_test -> first = line_1;
    lines_test -> last = line_2;

    // Тест 1: find_line.
    Line* answer = find_line(*lines_test, "Koltsevaya");
    cout << "---Test #1: find_line function---" << '\n' << answer -> name << '\n';

    // Тест 2: add_line.
    add_line(*lines_test, "Butovskaya");
    add_line(*lines_test, "Zamoskvoretskaya");
    Line* cur_line_t = lines_test -> first;
    cout << "---Test #2: add_line function---" << '\n';
    while (cur_line_t != nullptr)
    {
        cout << cur_line_t -> name << '\n';
        cur_line_t = cur_line_t -> next;
    }

    // Тест 3: get_line.
    cout << "---Test #3: get_line function---" << '\n';
    cout << "Finding line in lines list: " << get_line(*lines_test, "Koltsevaya") -> name << '\n';
    cout << "Adding line in lines list. Func returns nullptr and adds the line: "
         << '\n' << get_line(*lines_test, "Kalininskaya") << '\n';
    cur_line_t = lines_test -> first;
    while (cur_line_t != nullptr)
    {
        cout << cur_line_t -> name << '\n';
        cur_line_t = cur_line_t -> next;
    }
	return 0;
}
