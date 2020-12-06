//
// Created by Abdusalam Yabrak on 2020-12-02.
//

#include "TagRemover.h"

TagRemover::TagRemover(std::istream &in) {
    std::string line;
    while (getline(in, line)) {
        text.append(line);
        text.append("\n");
    }
    std::cout << "The original text:\n" << text << "\n";

    int start = text.find('<');
    int end = text.find('>');
    while (start > -1 && end > -1) {
        text.erase(start, end - start + 1);
        start = text.find('<');
        end = text.find('>');
    }

}

void TagRemover::print(std::ostream &out) {
    out << text << "\n";
}