//
// Created by Oleksandr Arnopolin on 9/4/20.
//

#include "Axe.h"

Axe::Axe(int damage) : m_damage(damage) {

}
int Axe::getDamage() const {
    return m_damage;
}