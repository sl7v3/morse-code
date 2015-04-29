#ifndef _morse_code_h
#define _morse_code_h
#include <iostream>
#include <string>
#include <utility>
#include "Binary_Search_Tree.h"

struct MorsePair : public std::pair<char, std::string> {
    bool operator<(const MorsePair &other) const {
        auto it = this->second.begin();
        auto otherIt = other.second.begin();

        while (it != this->second.end() && otherIt != other.second.end()) {
            if (*it < *otherIt) {
                return true;
            } else if (*it > *otherIt) {
                return false;
            }
            ++it;
            ++otherIt;
        }
        if (it != this->second.end()) {
            return *it == '.';
        } else {
            return *otherIt == '_';
        }
    }
};

class MorseCode {
    public:
        MorseCode();
        MorseCode(std::istream &in);
    private:
        Binary_Search_Tree<MorsePair> tree;
};

#endif
