#include "metro.h"

using namespace std;

Line* find_line(Lines& lines, const string& name)
{
    // Данная функция ищет линию под названием `name` в списке `lines`.
	Line* cur_line = lines.first;
	while(cur_line != nullptr)
    {
		if (cur_line -> name == name)
			return cur_line;
		cur_line = cur_line -> next;
	}
	return nullptr;
}

Line* add_line(Lines& lines, const string& line_name)
{
    // Данная функция добавляет линию под названием `name` в конец списка `lines`.
	Line* line_to_add = new Line;
    line_to_add -> name = line_name;
    line_to_add -> next = nullptr;
	lines.last -> next = line_to_add;
	lines.last = line_to_add;
}

Line* get_line(Lines& lines, const string& name)
{
    // Данная функция находит линию под названием `name` в `lines` или создаёт и добавляет её в конец.
    Line* line_to_get = find_line(lines, name);
    if (line_to_get == nullptr)
    {
        add_line(lines, name);
        return line_to_get;
    }
    else
    {
        return line_to_get;
    }
}
