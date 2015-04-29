#include <string>
#include "MorseCode.h"

MorseCode::MorseCode() {
    // Intentionally blank.
}

MorseCode::MorseCode(std::istream &in) {
    // Placeholder root node with value of "A", which is > "." and < "_"
    MorsePair root;
    root.first = ' ';
    root.second = "A";
    tree.insert(root);

    while (in.good()) {
        MorsePair m;
        in >> m.first;
        in >> m.second;
        tree.insert(m);
    }

    std::cout << tree;
}
