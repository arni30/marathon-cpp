#include "squareValue.h"
#include <string>
#include <vector>
#include <array>
#include <list>
int main(int argc, char** argv) {

    std::vector<int> a(10, 2);
    std::array<int, 10> b{3};
    std::list<int> c (10, 5);

    squareValue(a);
    for (auto i : a) {
        std::cout << i << std::endl;
    }
    squareValue(b);
    for (auto i : b) {
        std::cout << i << std::endl;
    }
    squareValue(c);
    for (auto i : c) {
        std::cout << i << std::endl;
    }
    return 0;
}