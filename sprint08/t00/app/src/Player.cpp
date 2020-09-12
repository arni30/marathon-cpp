#include "Player.h"
#include <iostream>

char Player::getIdentifier() const {
    return 'P';
}

void Player::movePlayer(MoveManager::Direction dir) {
    if (dir == MoveManager::Direction::Up)
        m_posY--;
    else if (dir == MoveManager::Direction::Down) {
        m_posY++;
    }
    else if (dir == MoveManager::Direction::Left)
        m_posX--;
    else if (dir == MoveManager::Direction::Right)
        m_posX++;
}

size_t Player::posX() const {
    return m_posX;
}
size_t Player::posY() const {
    return m_posY;
}