#include "simpleSort.h"

void simpleSort(int argc, char **argv) {
    std::array<std::string, 5> arr;
    for (int i = 1, j = 0; i < arr.size(); i++, j++) {
        arr[j] = static_cast<std::string>(argv[i]);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << std::endl;
    }
}