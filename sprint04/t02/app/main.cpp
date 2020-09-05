#include "src/Dragonborn.h"

#include <string>

int main(int argc, char** argv){
    Dragonborn dragon;
    Dragonborn::Actions action;
    std::map <std::string, Dragonborn::Actions> map;
    if (argc != 2) {
        std::cerr << "usage: ./dragonborn [action]" << std::endl;
        exit(1);
    }
    map.insert({"shout", Dragonborn::Actions::Shout});
    map.insert({"magic", Dragonborn::Actions::Magic});
    map.insert({"weapon", Dragonborn::Actions::Weapon});
    try {
        dragon.executeAction(map.at(argv[1]));
    }
    catch (...) {
        std::cerr << "Invalid action" << std::endl;
        exit(1);
    }
}

