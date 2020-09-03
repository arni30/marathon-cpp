#include "simpleSort.h"

void simpleSort(int argc, char **argv) {
    std::array<std::string, 5> arr;

    if (argc != 6) {
        std::cerr << "usage: ./simpleSort arg1 arg2 arg3 arg4 arg5" << std::endl;
        exit(1);
    }
    for (int i = 1, j = 0; i <= arr.size(); i++, j++) {
        arr[j] = static_cast<std::string>(argv[i]);
    }
    std::sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i];
        if (i == 4)
            std::cout << std::endl;
        else
            std::cout << " ";
    }
}