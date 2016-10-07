#include <stdio.h>
#include "metro.h"
#include "line.cc"

int main(int argc, char **argv)
{
//	list_init();
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
	Line* line_1;
	Line* line_2;
	line_1 -> name = "Люблинско-Дмитровская";
	line_1 -> next = line_2;
	line_2 -> name = "Кольцевая";
	line_2 -> next = nullptr;
	Lines* lines_test;
	lines_test -> first = line_1;
	lines_test -> last = line_2;
	find_line(*lines_test, "Кольцевая");
	return 0;
}
