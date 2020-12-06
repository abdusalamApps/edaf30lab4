//
// Created by Abdusalam Yabrak on 2020-12-02.
//
#include <sstream>
#include <fstream>
#include "TagRemover.h"

int main() {
    std::string hasTag = "This had no tag";
    std::string hasNoTag = "This had a <tag> tag";
    std::string tagDiffLines = "This had a <ta\ng> tag ";

    std::stringstream st(tagDiffLines);


    std::ifstream file("test.html");

    if (file.is_open()) {

        TagRemover tagRemover(file);
        tagRemover.print(std::cout);
    } else {
        std::cout << "File not found\n";
    }
}