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
	string word = read_word(input);
    // TODO: пока последнее считанное слово — "line", разобрать описание линии.
	while (word == "line") {
			parse_line(input, keyword, scheme);
	}


    return scheme;
}

void
parse_line(std::istream& input, std::string& keyword, Scheme& scheme) {
	
    Line* line = get_line(scheme, read_word(input));
	
    keyword = read_word(input);
    while (keyword == "station") {
        parse_station(input, keyword, scheme, line);
	}
    // TODO: считать название линии и находить либо создавать её.
    // TODO: считать очередное слово и циклически разбирать описание станции.
}

void
parse_station(istream& input, string& keyword, Lines& scheme, Line* line) {
	
	Station* station = find_station(line, read_word(input));
    if (station != nullptr) {
        move_to_end(*line, station);
    } else {
        station = add_station(line, read_word(input));
    }

    keyword = read_word(input);

    while (keyword == "transit") {
        parse_transit(input, keyword, scheme, station);
	}
	
    // TODO: считать название линии и либо создавать её, либо перемещать в конец линии.
    // TODO: считать очередное слово и циклически разбирать описание перехода.
}



void
parse_transit(istream& input, string& keyword, Scheme& scheme, Station* station) {
    read_word(input); 
	
    read_word(input); 
 
    string station_name = read_word(input);
	
    read_word(input); 
	
    string line_name = read_word(input);
	
    read_word(input);

    Line* sibling_line = get_line(scheme, line_name);
	
    Station* sibling_station = get_station(*sibling_line, station_name);
	
    add_transit(station, sibling_station);

	keyword = read_word(input);
	
	
    // TODO: считать название станции и линии назначения, найти или создать их,
    //       добавить переход.
    // TODO: считать очередное слово.
}
