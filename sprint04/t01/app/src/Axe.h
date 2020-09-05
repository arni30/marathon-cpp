//
// Created by Oleksandr Arnopolin on 9/4/20.
//

#ifndef T01_AXE_H
#define T01_AXE_H


class Axe final {
    public:
        Axe(int damage);
        int getDamage() const;
    private:
        const int m_damage;
};


#endif //T01_AXE_H
