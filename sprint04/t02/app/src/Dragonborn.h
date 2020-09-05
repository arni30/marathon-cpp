//
// Created by Oleksandr Arnopolin on 9/4/20.
//
#pragma once
#include <iostream>
#include <map>
class Dragonborn final {
public:
    enum class Actions {
        Shout,
        Magic,
        Weapon,
        Invalid
    };
    void executeAction(const Actions action);
private:
    void shoutThuum() const;
    void attackWithMagic() const;
    void attackWithWeapon() const;
};