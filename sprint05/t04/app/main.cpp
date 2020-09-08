#include "src/Weapon.h"
#include "src/Soldier.h"
#include "src/ImperialSoldier.h"
#include "src/StormcloakSoldier.h"
#include "src/Sword.h"
#include "src/Axe.h"

void check_idx(char *str, size_t& index) {
    if (str[index] != '\0')
        throw 0;
}
int getDamage(int argc, char** argv, int flag ) {
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
            check_idx(argv[2], index);
        }
        if (damage < 10 || damage > 20)
            throw 1;

    }
    catch (...) {
        std::cerr << "Damage has to be in a range of 10-20 points." << std::endl;
        exit(1);
    }
    return damage;
}

void warSoldiers(StormcloackSoldier& sc, ImperialSoldier& is) {
    std::cout << "\n***The battle has begun!***\n" << std::endl;
    while (1) {
        sc.attack(is);

        if (is.getHealth() <= 0) {
            std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
            std::cout << "Stormcloak has won!\n" << std::endl;
            break;
        }
        is.attack(sc);
        if (sc.getHealth() <= 0) {
            std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
            std::cout << "Imperial has won!\n" << std::endl;
            break;
        }
        std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;


    }
}
int main(int argc, char** argv) {
    Weapon sword = Sword(getDamage(argc, argv, 1));
    Weapon axe = Axe(getDamage(argc, argv, 2));
    ImperialSoldier is;
    StormcloackSoldier sc;
    is.setWeapon(&sword);
    sc.setWeapon(&axe);
    warSoldiers(sc, is);

}

