#include "printDialog.h"

void printDialog(const std::string& name, const std::string& sentence) {
    if (!name.empty() && !sentence.empty())
        std::cout << name << " says: " << "\"" << sentence  << "\"" << std::endl;
    return;
}

//int main() {
//    std::string a = "Guard";
//    std::string b = "I used to be an adventurer like you. Then I took an arrow in the knee...";
//    printDialog(a, b);
//    return 0;
//}
