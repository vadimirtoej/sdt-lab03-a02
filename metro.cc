#include "metro.h"

#include <iostream>

using namespace std;

int
main() {
    cout <<read_word(cin) <<endl;
    Scheme scheme = parse_scheme(cin);
    cout << scheme << endl;
    return 0;
}
