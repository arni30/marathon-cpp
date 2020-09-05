#include "utils/algorithmUtils.h"
#include <string>
#include <map>
#include <vector>
using namespace Utils;
static bool abs_compare(int a) {
    return a < 2;
}
int main () {
//    int b = 5;
    std::vector<int>vec;
    vec.push_back(4);
    vec.push_back(-12);
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(2);
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(4);
    vec.push_back(-12);
    vec.push_back(-12);

//    std::cout << IsInsideRange(2, {1,3}) << std::endl;
//    std::cout << Modify(b, 5) << "       " << b << std::endl;
//    std::cout << CountIf(vec,[](int a)  {
//        return a < 5;
//    });
//    std::cout << *(vec, abs_compare);
   std::cout << IndexOfIf(vec, abs_compare);
//    for (auto i : vec)
//        std::cout << i << std::endl;

}
