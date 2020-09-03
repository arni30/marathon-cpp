#include "moveAlong.h"

void moveAlong(const int argc, const char **argv) {
    std::vector<std::string>arr;
    std::string str;

    if (argc < 2) {
        std::cerr << "usage: ./moveAlong [args]" << std::endl;
        exit(1);
    }
    for (auto i = 1, j = 0; i < argcs; ++i, j++) {
        str = static_cast<std::string>(argv[i]);
        std::transform(str.begin(), str.end(), str.begin(),
                       [](unsigned char c){ return std::tolower(c); });
        arr.push_back(str);
        if (arr[j].find("mercer") != std::string::npos
            || arr[j].find("emer") != std::string::npos
            || arr[j].find("jim") != std::string::npos) {
            std::cout << static_cast<std::string>(argv[i]) << ", move along!" << std::endl;
        }
        str.clear();
    }
    arr.clear();
}