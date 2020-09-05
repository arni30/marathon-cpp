//
// Created by Oleksandr Arnopolin on 9/4/20.
//

#ifndef T01_STORMCLOAKSOLDIER_H
#define T01_STORMCLOAKSOLDIER_H

#include "ImperialSoldier.h"
#include "Axe.h"
#include <iostream>
class ImperialSoldier;
class Axe;

class StormcloakSoldier final {
    public:
        StormcloakSoldier();
        ~StormcloakSoldier();
        void setWeapon(Axe* weapon);
        void attack(ImperialSoldier& enemy);
        void consumeDamage(int amount);
        int getHealth() const;
    private:
        Axe* m_weapon;
        int m_health;
};


#endif //T01_STORMCLOAKSOLDIER_H
