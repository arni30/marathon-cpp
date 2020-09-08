#include "src/Draugr.h"

int main(int argc, char **argv) {
    int shout = 0;
    auto index = 0ul;
    if (argc != 2) {
        std::cerr << "usage: ./draugr [shoutNumber]" << std::endl;
        exit(1);
    }
    try {
        shout = std::stoi(argv[1], &index);
        if (argv[1][index] != '\0')
            throw 1;
        Draugr draugr = Draugr();
        draugr.shoutPhrase(shout);

    }
    catch (...) {
        std::cerr << "Invalid shoutNumber" << std::endl;
    }

    return 0;
}