#include "metro.h"

#include <iostream>

using namespace std;


ostream&
operator<<(ostream& output, const Transit& transit) {
    // TODO: печатать переход.
	//Node* c= Transit.destination;
	Station* station = transit.destination;
	station->name;
	output <<"Perexod na station"<< station;	
    return output;
}

ostream&
operator<<(ostream& output, const Station& station) {
    // TODO: печатать станцию.
	Line* line = station.line;
	line -> name;
	
	Transit* transit = station.transits;
	transit -> destination;
	
	output <<"linia"<< line<<"perexod"<<transit;
    return output;
}

ostream&
operator<<(ostream& output, const Line& line) {
    // TODO: печатать линию.
	
    return output;
}

ostream&
operator<<(ostream& output, const Scheme& scheme) {
    // TODO: печатать схему.
    return output;
}
