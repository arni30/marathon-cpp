//
// Created by Oleksandr Arnopolin on 9/4/20.
//
#ifndef T01_IMPERIALSOLDIER_H
#define T01_IMPERIALSOLDIER_H
#include "StormcloakSoldier.h"
#include "Sword.h"
#include <iostream>

class StormcloakSoldier;
class Sword;

class ImperialSoldier final {
    public:
        ImperialSoldier();
        ~ImperialSoldier();
        void setWeapon(Sword* weapon);
        void attack(StormcloakSoldier& enemy);
        void consumeDamage(int amount);
        int getHealth() const;
    private:
        Sword* m_weapon;
        int m_health;
};


#endif //T01_IMPERIALSOLDIER_H
