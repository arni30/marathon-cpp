//
// Created by Oleksandr Arnopolin on 9/8/20.
//

#ifndef IMPERIALVSSTORMCLOAK_WEAPON_H
#define IMPERIALVSSTORMCLOAK_WEAPON_H
#include <iostream>

class Weapon{
public:
    explicit Weapon(int damage);
    virtual ~Weapon() = default;
    int getDamage() const;
private:
    const int m_damage;
};


#endif //IMPERIALVSSTORMCLOAK_WEAPON_H
