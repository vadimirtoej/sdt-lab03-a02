#include "metro.h"

using namespace std;

void append_station(Line& line, Station* station);
void detach_station(Line& line, Station* station);

Station*
find_station(Line& line, const string& name) {
    // TODO: искать на линии `line` станцию под названием `name`.
    return nullptr;
}

void
move_to_end(Line& line, Station* station) {
    detach_station(line, station);
    append_station(line, station);
}

Station*
add_station(Line& line, const string& name) {
    // TODO: создать новую станцию под названием `name`.
    // TODO: добавить созданную станцию в конец линии `line`.
    return nullptr;
}

Station*
get_station(Line& line, const string& name) {
    // TODO: найти или добавить на линии `line` станцию под названием `name`.
    return nullptr;
}

void
append_station(Line& line, Station* station) {
    // TODO: поместить станцию `station` в конец линии `line`.
}

void
detach_station(Line& line, Station* station) {
    // TODO: отсоединить станцию `station` от линии `line`:
    // TODO:    * первая станция — особый простой случай;
    // TODO:    * иначе нужно найти станцию, предшествующую заданной,
    // TODO:      т. к. изменяется её указатель.
    // TODO:        - если станция является последней, изменится `last`.
}

