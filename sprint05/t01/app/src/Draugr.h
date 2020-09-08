#pragma once
#include <initializer_list>
#include <string>
#include <map>
#include <iostream>
class Draugr {
public:
    Draugr() :m_health(100), m_frostResist(50){
        Draugr(m_health, m_frostResist);
    }
    Draugr(int frostResist) :m_health(100), m_frostResist(frostResist){
        Draugr(m_health, m_frostResist);
    }
    Draugr(double health, int frostResist) :m_health(health), m_frostResist(frostResist){
        std::cout << "Draugr with " << m_health << " health and " << m_frostResist << "% frost resist was born!" << std::endl;
        std::cout << "Draugr (" << m_health << " " << "health, " << m_frostResist << "% frost resist) shouts:" << std::endl;
    }
    void shoutPhrase(int shoutNumber) const;
private:
    double m_health;
    const int m_frostResist;
};
