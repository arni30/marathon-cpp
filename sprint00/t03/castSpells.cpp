#include "castSpells.h"

int castFloatToInt(float number) {
    return static_cast<int>(number);
}
int* castToNonConstIntPtr(const int* ptr) {
    return const_cast<int *>(ptr);
}

//int main() {
//    int *a = new int;
//    *a = 1;
//    printf("int: %d\n",castFloatToInt(10.11));
//    printf("a = %d\n", castToNonConstIntPtr(a)[0]);
//    delete a;
//}
