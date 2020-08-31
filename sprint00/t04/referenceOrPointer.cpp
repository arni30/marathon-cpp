#include "referenceOrPointer.h"

void multiplyByPointer(int* ptr, int mult) {
    if (ptr && *ptr) {
        *ptr *= mult;
    }
}
void multiplyByReference(int& ref, int mult) {
    ref *= mult;
}
int main() {
    int a = -1;

    multiplyByPointer(&a, 5);
    std::cout << a  << std::endl;

    multiplyByReference(a, 4);
    std::cout << a  << std::endl;
    return 0;
}
