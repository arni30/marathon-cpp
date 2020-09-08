#include "src/Draugr.h"

void defaultCreate(int shout) {
    Draugr draugr = Draugr();
    draugr.shoutPhrase(shout);
}

void twoDraugars(char** argv, int shout) {
    double health = 0;
    int resist = 0;
    auto index = 0ul;

    health = std::stod(argv[2], &index);
    if (argv[2][index] != '\0')
        throw std::exception();
    Draugr draugr1 = Draugr(health, 50);
    draugr1.shoutPhrase(shout);
    resist = std::stoi(argv[2], &index);
    if (argv[2][index] != '\0')
        throw std::exception();
    Draugr draugr2 = Draugr(resist);
    draugr2.shoutPhrase(shout);
}

void oneCreate(char** argv, int shout) {
    double health = 0;
    int resist = 0;
    auto index = 0ul;

    health = std::stod(argv[2], &index);
    if (argv[2][index] != '\0')
        throw std::exception();
    resist = std::stoi(argv[3], &index);
    if (argv[3][index] != '\0')
        throw std::exception();
    Draugr draugr = Draugr(health, resist);
    draugr.shoutPhrase(shout);
}

int main(int argc, char **argv) {
    int shout = 0;
    auto index = 0ul;

    if (argc < 2 || argc > 4) {
        std::cerr << "usage: ./draugr [shoutNumber] [health] [frostResist]" << std::endl;
        exit(1);
    }
    try {
        try {
            shout = std::stoi(argv[1], &index);
        }
        catch (...) {
            throw 2;
        }
        if (shout < 0 || shout > 8 ||argv[1][index] != '\0')
            throw 1;
        if (argc == 2)
            defaultCreate(shout);
        if (argc == 3)
            twoDraugars(argv, shout);
        if (argc == 4)
            oneCreate(argv, shout);
    }
    catch (int a) {
        std::cerr << "Invalid shoutNumber" << std::endl;
    }
    catch (...) {
        std::cerr << "Error" << std::endl;
    }
    return 0;
}