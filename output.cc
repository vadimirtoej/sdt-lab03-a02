#include "metro.h"

#include <iostream>

using namespace std;

ostream&
operator<<(ostream& output, const Transit& transit) {
    output << "\t\ttransit to station " << transit.destination->name << " of " << transit.destination->line->name << " line" << endl;
    return output;
}

ostream&
operator<<(ostream& output, const Station& station) {
    output << "\tstation " << station.name << endl;
    Transit *current = station.transits.first;
    while(current != nullptr){
        output << *current << endl;
        current = current->next;
    }
    return output;
}

ostream&
operator<<(ostream& output, const Line& line) {
    output << "line " << line.name << endl;
    Station *current = line.stations.first;
    while(current != nullptr){
        output << *current << endl;
        current = current->next;
    }
    return output;
}

ostream&
operator<<(ostream& output, const Scheme& scheme) {
    Line *current = scheme.first;
    while(current != nullptr){
        output << *current << endl;
        current = current->next;
    }
    return output;
}
