//
// Created by Abdusalam Yabrak on 2020-12-02.
//

#ifndef LAB4_TAGREMOVER_H
#define LAB4_TAGREMOVER_H

#include "iostream"

class TagRemover {
public:
    explicit TagRemover(std::istream &in);

    void print(std::ostream &out);

private:
    std::string text;
};


#endif //LAB4_TAGREMOVER_H
