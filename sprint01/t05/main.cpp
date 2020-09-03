#include "src/stdAlgoV2.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "usage: ./stdAlgoV2 [file_name]" << std::endl;
        exit(1);
    }
    stdAlgoV2(static_cast<std::string>(argv[1]));
    return 0;
}
