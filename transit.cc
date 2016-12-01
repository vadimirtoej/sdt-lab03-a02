#include "metro.h"

using namespace std;

void
add_transit(Station* station, Station* destination) {

    Transits *tmp_transits = &station->transits;

    Transit *new_transit = new Transit;
    new_transit->destination = destination;
    new_transit->next = nullptr;

    if (tmp_transits->first == nullptr){
        tmp_transits->first = new_transit;
        tmp_transits->last = new_transit;
        return;
    }

    tmp_transits->last->next = new_transit;
    tmp_transits->last = new_transit;
    return;
}
