#include "outputContainer.h"
#include<string>
#include <vector>
#include <array>
#include <list>
int main(int argc, char** argv) {

    std::vector<int> a(10, 0);
    std::array<int, 10> b{1,1,1,1,1,1,1,1,1,1};
    std::list<int> c (10, 2);

    outputContainer(a);
    outputContainer(b);
    outputContainer(c);
    return 0;
}