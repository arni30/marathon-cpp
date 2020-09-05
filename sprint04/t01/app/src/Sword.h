//
// Created by Oleksandr Arnopolin on 9/4/20.
//

#ifndef T01_SWORD_H
#define T01_SWORD_H


class Sword final {
    public:
        Sword(int damage);
        int getDamage() const;
    private:
        const int m_damage;
};

#endif //T01_SWORD_H
