#include "metro.h"

using namespace std;

Line* find_line(Lines& lines, const string& name) {
    // TODO: искать линию под названием `name` в списке `lines`.
	bool enter_flag = true;
	while (true) 
	{
		if (enter_flag)
		{	
			Line* cur_line = *lines.first;
			if (cur_line.name == name)
			return cur_line;
		}
		
			
	}
    return nullptr;
}

Line* add_line(Lines& lines, const string& name) {
    // TODO: добавить линию под названием `name` в конец списка `lines`.
    return nullptr;
}

Line* get_line(Lines& lines, const string& name) {
    // TODO: найти линию под названием `name` в `lines` или создать и добавить её в конец.
    return nullptr;
}
