#include <iostream>
#include <fstream>
#include "MorseCode.h"

int main() {
    // The comparison works.
    MorsePair e, t, i, a;
    e.second = ".";
    t.second = "_";
    i.second = "..";
    a.second = "._";

    std::cout << (e < t) << '\n';
    std::cout << (e < i) << '\n';
    std::cout << (e < a) << '\n';

    // Building a tree halfway works... it is a proper binary search tree, but
    // not balanced the same way as in the project pdf illustration. Not sure
    // if that matters or I'm overthinking it or what.
    std::ifstream in("morse.txt");
    MorseCode m(in);

}
