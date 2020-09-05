#include "sortValue.h"
#include <string>
#include <vector>
#include <array>
#include <list>
int main(int argc, char** argv) {
    
    std::array<int,5> a{5,4,3,2,1};
    auto begin = sortValues(a.begin(), a.end());
    for (auto i = begin; i != a.end(); ++i)
        std::cout << (*begin)++ << std::endl;
    return 0;
}