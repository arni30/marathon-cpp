#include "isPalindrome.h"
#include <string>
#include <vector>
#include <array>
#include <list>
int main(int argc, char** argv) {

//    std::vector<int> a(10, 2);
//    std::array<int, 10> a{3};
    std::list<int> a{1,2,3,2,1};
    std::cout << isPalindrome(a.begin(), a.end()) << std::endl;
//    for (auto i : c) {
//        std::cout << i << std::endl;
//    }
//    std::cout << isPalindrome(b.begin(), b.end()) << std::endl;
////    for (auto i : b) {
////        std::cout << i << std::endl;
////    }
//    std::cout << isPalindrome(c.begin(), c.end()) << std::endl;
    return 0;
}