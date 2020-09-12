#include "MoveManager.h"
#include "Player.h"
#include "Map.h"

size_t parseArgs(int argc, char **argv, int i) {
    auto index = 0ul;
    int res = 0;
    try {
        if (argc != 3)
            throw 1;
        res = std::stoi(argv[i], &index);
        if (argv[i][index] != '\0')
            throw 1;
        if (res < 5 || res > 20)
            throw 2;
    }
    catch (int a) {
        if (a == 2)
            std::cerr << "Invalid map size" << std::endl;
        else
            std::cerr << "usage: ./smartPointers [width] [height]" << std::endl;
        exit(1);
    }
    catch (std::exception) {
        std::cerr << "usage: ./smartPointers [width] [height]" << std::endl;
        exit(1);
    }
    return res;
}


int main(int argc, char **argv) {
    std::shared_ptr<Player>player(new Player);
    std::shared_ptr<Map>map(new Map(   parseArgs(argc, argv, 1),
            parseArgs(argc, argv, 2), player));
    MoveManager mm(player, map);
    std::string input;

    while (1) {
        map->outputMap();
        std::cout << ":> ";
        std::getline(std::cin, input, '\n');
        mm.processInputAndMove(input);
    }
    return 0;
}