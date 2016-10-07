#include "metro.h"

#include <iostream>

using namespace std;

void parse_line(
        std::istream& input, std::string& keyword, Scheme& scheme);
void parse_station(
        std::istream& input, std::string& keyword, Scheme& scheme, Line* line);
void parse_transit(
        std::istream& input, std::string& keyword, Scheme& scheme, Station* station);

Scheme
parse_scheme(istream& input) {
    Lines scheme;

    // Инициализировать схему как пустой список.
    scheme.first = nullptr;
    scheme.last = nullptr;

    // TODO: считать первое слово.
    // TODO: ока последнее считанное слово — "line", разобрать описание линии.

    return scheme;
}

void
parse_line(std::istream& input, std::string& keyword, Scheme& scheme) {
    // TODO: считать название линии и находить либо создавать её.
    // TODO: считать очередное слово и циклически разбирать описание станции.
}

void
parse_station(istream& input, string& keyword, Lines& scheme, Line* line) {
    // TODO: считать название линии и либо создавать её, либо перемещать в конец линии.
    // TODO: считать очередное слово и циклически разбирать описание перехода.
}

void
parse_transit(istream& input, string& keyword, Scheme& scheme, Station* station) {
    // TODO: считать название станции и линии назначения, найти или создать их,
    //       добавить переход.
    // TODO: считать очередное слово.
}
