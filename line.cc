#include "metro.h"

using namespace std;

//Line line; //define value 
//Line* line_ptr; //pointer
//Line& lin_ref =  

Line* find_line(Lines& lines, const string& name) {
    // TODO: искать линию под названием `name` в списке `lines`.
	Line* cur_line = lines.first;
	while(cur_line != nullptr){
		if (cur_line -> name == name)
			return cur_line;
		cur_line = cur_line -> next;
	}
	return nullptr;
}

Line* add_line(Lines& lines, const string& line_name) {
    // TODO: добавить линию под названием `name` в конец списка `lines`.
	Line* cur_line;
//	Line* cur_line = new cur_line;
    cur_line -> name = line_name;
    cur_line -> next = nullptr;
	lines.last -> next = cur_line;
}

Line* get_line(Lines& lines, const string& name) {
    // TODO: найти линию под названием `name` в `lines` или создать и добавить её в конец.
    return nullptr;
}
