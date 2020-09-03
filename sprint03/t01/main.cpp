#include<iostream>
#include<string>
#include <vector>
#include <array>
#include <list>
#include"outputAny.h"

int main(int argc, char** argv) {
    std::vector<int> a(10, 0);
    std::array<int, 10> b{1,1,1,1,1,1,1,1,1,1};
    std::list<int> c (10, 2);

    outputAny(a);
    outputAny(b);
    outputAny(c);
    return 0;
}