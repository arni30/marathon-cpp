#include "Draugr.h"

//Draugr::Draugr() :m_health(100), m_frostResist(50){
//    std::cout << "Draugr (" << m_health << " " << "health, " << m_frostResist << "% frost resist) shouts:" << std::endl;
//}

void Draugr::shoutPhrase(int shoutNumber) const {
    std::map<int, std::string>il{
        {0, "Qiilaan Us Dilon!"},
        {1, "Bolog Aaz, Mal Lir!"},
        {2, "Kren Sosaal!"},
        {3, "Dir Volaan!"},
        {4, "Aar Vin Ok!"},
        {5, "Unslaad Krosis!"},
        {6, "Faaz! Paak! Dinok!"},
        {7, "Aav Dilon!"},
        {8, "Sovngarde Saraan!"}
    };
    std::cout << il.at(shoutNumber) << std::endl;
}