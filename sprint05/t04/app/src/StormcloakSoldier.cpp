#include "StormcloakSoldier.h"

StormcloackSoldier::StormcloackSoldier()
        : Soldier("Flynn") {
    std::cout << "Stormcloak soldier was created" << std::endl;
}

StormcloackSoldier::~StormcloackSoldier() {
    std::cout << "Stormcloak soldier was deleted" << std::endl;
}
