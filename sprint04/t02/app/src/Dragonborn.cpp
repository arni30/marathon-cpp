#include "Dragonborn.h"

void Dragonborn::executeAction(const Actions action) {
    std::map <Dragonborn::Actions, void(Dragonborn::*)() const > map;
    map.insert({Dragonborn::Actions::Shout, &Dragonborn::shoutThuum});
    map.insert({Dragonborn::Actions::Magic, &Dragonborn::attackWithMagic});
    map.insert({Dragonborn::Actions::Weapon, &Dragonborn::attackWithWeapon});
    (this->*map.at(action))();
}



void Dragonborn::shoutThuum() const {
    std::cout << "Yol Toor Shul" << std::endl;
}
void Dragonborn::attackWithMagic() const {
    std::cout << "*attacks with magic spell*" << std::endl;
}
void Dragonborn::attackWithWeapon() const {
    std::cout << "*attacks with weapon*" << std::endl;
}