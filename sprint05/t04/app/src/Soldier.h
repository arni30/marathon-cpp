//
// Created by Oleksandr Arnopolin on 9/8/20.
//

#ifndef IMPERIALVSSTORMCLOAK_SOLDIER_H
#define IMPERIALVSSTORMCLOAK_SOLDIER_H
#include <iostream>
#include "Weapon.h"

class Soldier {
public:
    Soldier(std::string&& name, int health=100);
    virtual~Soldier();
    void attack(Soldier& other);
    void setWeapon(Weapon* weapon);
    int getHealth() const;
private:
    Weapon* m_weapon{nullptr};
    std::string m_name;
    int m_health;
};


#endif //IMPERIALVSSTORMCLOAK_SOLDIER_H
