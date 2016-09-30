#pragma once

#include <iosfwd>  // Объявления std::istream, std::ostream.
#include <string>  // Строковой тип данных std::string.

// Чтобы можно было объявлять указатели на Line, Station и Transit до того,
// как эти структуры будут описаны (определены), компилятору нужно сообщить,
// что такие структуры есть (объявить их).
struct Line;
struct Station;
struct Transit;

// Переход на станцию *destination.
struct Transit {
    Station* destination;

    Transit* next;  // Указатель на следующий переход в списке (со станции).
};

// Связанный список переходов.
struct Transits {
    Transit* first;
    Transit* last;
};

// Станция под названием `name` линии `*line` с переходами в transits.
struct Station {
    std::string name;
    Transits transits;
    Line* line;

    Station* next;  // Указатель на следующую станцию в списке (на линии).
};

// Связанный список станций.
struct Stations {
    Station* first;
    Station* last;
};

// Линия под названием name со станциями в stations.
struct Line {
    std::string name;
    Stations stations;

    Line* next;  // Указатель на следующую линию в списке (на схеме).
};

// Связанный список линий.
struct Lines {
    Line* first;
    Line* last;
};

// Схема — это это же самое, что список линий (по крайней мере, пока).
using Scheme = Lines;


// Средства ввода, реализуются в input.cc.
std::string read_word(std::istream& input);


// Разбор схемы, реализуется в parser.cc.
Scheme parse_scheme(std::istream& input);


// Управление линиями, реализуется в line.cc.
Line* get_line(Lines& lines, const std::string& name);


// Управление станциями, реализуется в station.cc.
Station* find_station(Line& line, const std::string& name);
void move_to_end(Line& line, Station* station);
Station* add_station(Line& line, const std::string& name);
Station* get_station(Line& line, const std::string& name);


// Управление переходами, реализуется в transit.cc.
void add_transit(Station* station, Station* destination);


// Средства вывода, реализуются в output.cc.
std::ostream& operator<<(std::ostream& output, const Transit& transit);
std::ostream& operator<<(std::ostream& output, const Station& station);
std::ostream& operator<<(std::ostream& output, const Line& line);
std::ostream& operator<<(std::ostream& output, const Scheme& scheme);
