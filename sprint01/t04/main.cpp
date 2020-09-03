#include "src/stdAlgoV1.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "usage: ./stdAlgoV1 [file_name]" << std::endl;
        exit(1);
    }
    stdAlgoV1(static_cast<std::string>(argv[1]));
    return 0;
}
