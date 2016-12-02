#include "metro.h"

#include <iostream>

using namespace std;

ostream&
operator<<(ostream& output, const Transit& transit) {
    // TODO: печатать переход.
     output << "\t\ttransit to station " << transit.destination->name << " of " << transit.destination->line->name << " line" << endl;

    return output;
}

ostream&
operator<<(ostream& output, const Station& station) {
    // TODO: печатать станцию.
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
    // TODO: печатать линию.
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
    // TODO: печатать схему.
      Line *current = scheme.first;
    while(current != nullptr){
        output << *current << endl;
        current = current->next;
    }
    return output;
}
