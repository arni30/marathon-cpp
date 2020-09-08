//
// Created by Oleksandr Arnopolin on 9/8/20.
//

#include "Weapon.h"

Weapon::Weapon(int damage) :m_damage(damage) {

}
int Weapon::getDamage() const {
    return m_damage;
}