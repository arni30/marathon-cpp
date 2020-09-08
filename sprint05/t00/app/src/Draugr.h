//
// Created by Oleksandr Arnopolin on 9/7/20.
//

#ifndef DWEMERCALCULATOR_DRAUGR_H
#define DWEMERCALCULATOR_DRAUGR_H
#include <initializer_list>
#include <string>
#include <map>
#include <iostream>
class Draugr {
public:
    Draugr();
    void shoutPhrase(int shoutNumber) const;
private:
    double m_health;
    const int m_frostResist;
};


#endif //DWEMERCALCULATOR_DRAUGR_H
