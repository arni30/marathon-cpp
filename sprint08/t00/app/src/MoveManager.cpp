#include "MoveManager.h"
#include "Player.h"
#include "Map.h"
MoveManager::MoveManager(std::shared_ptr<Player>& player, std::shared_ptr<Map>& map)
    : m_map(map),
      m_player(player){
}

void MoveManager::processInputAndMove(const std::string& inputStr) {
    Direction dir;

    try {
        if (inputStr == "e")
            exit(0);
        else if (inputStr == "u")
            dir = Direction::Up;
        else if (inputStr == "d")
            dir = Direction::Down;
        else if (inputStr == "l")
            dir = Direction::Left;
        else if (inputStr == "r")
            dir = Direction::Right;
        else
            throw 1;
        if (checkMove(dir) == false)
            throw 2;
        else
            m_player->movePlayer(dir);
    }
    catch (int a) {
        if (a == 2)
            std::cerr << "Invalid direction" << std::endl;
        else if (a == 1)
            std::cerr << "Invalid input" << std::endl;
    }


}

bool MoveManager::checkMove(Direction dir) const {
    bool moveCheck = true;

    if (dir == Direction::Up) {
        if (m_player->posY() == 0)
            moveCheck = false;
    }
    else if (dir == Direction::Down) {
        if (m_player->posY() == m_map->height() - 1)
            moveCheck = false;
    }
    else if (dir == Direction::Right) {
        if (m_player->posX() == m_map->width() - 1)
            moveCheck = false;
    }
    else if (dir == Direction::Left) {
        if (m_player->posX() == 0)
            moveCheck = false;
    }
    return moveCheck;
}