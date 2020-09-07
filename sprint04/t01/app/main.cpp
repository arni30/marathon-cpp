#include "src/Axe.h"
#include "src/StormcloakSoldier.h"
#include "src/Sword.h"
#include "src/ImperialSoldier.h"
#include <iostream>

void check_idx(char *str, size_t& index) {
    if (str[index] != '\0')
        throw 0;
}

int getDemage(int argc, char** argv, int flag ) {
    int damage = 0;
    auto index = 0ul;
    if (argc != 3) {
        std::cerr << "usage: ./imperialVsStormcloak [dmgOfSword] [dmgOfAxe]" << std::endl;
        exit(1);
    }
    try {
        if (flag == 1) {
            damage = std::stoi(argv[1], &index);
            check_idx(argv[1], index);
        }
        else if (flag == 2) {
            damage = std::stoi(argv[2], &index);
            check_idx(argv[1], index);
        }
        else if (damage < 10 || damage > 20)
            throw 1;

    }
    catch (...) {
        std::cerr << "Damage has to be in a range of 10-20 points." << std::endl;
        exit(1);
    }
    return damage;
}

void warSoldiers(StormcloakSoldier& sc, ImperialSoldier& is) {
    while (1) {
        is.attack(sc);
        if (sc.getHealth() <= 0) {
            std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
            std::cout << "Imperial has won!" << std::endl;
            break;
        }
        sc.attack(is);
        if (is.getHealth() <= 0) {
            std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
            std::cout << "Stormcloak has won!" << std::endl;
            break;
        }
        std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;


    }


}
int main(int argc, char** argv){
    StormcloakSoldier *sc = new StormcloakSoldier();
    ImperialSoldier *is = new ImperialSoldier();
    Sword *sword = new Sword(getDemage(argc, argv, 1));
    Axe *axe = new Axe(getDemage(argc, argv, 2));
    sc->setWeapon(axe);
    is->setWeapon(sword);
    warSoldiers(*sc, *is);
    delete is;
    delete sc;
    //    is->ImperialSoldier::~ImperialSoldier();
//    sc->StormcloakSoldier::~StormcloakSoldier();
}

