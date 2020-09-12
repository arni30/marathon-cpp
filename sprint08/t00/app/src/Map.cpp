#include "Map.h"
#include "Player.h"
Map::Map(size_t width, size_t height, std::shared_ptr<Player>& player)
    : m_width(width),
      m_height(height),
      m_player(player) {
    m_map = std::make_unique<char[]>(m_width * m_height);
    generateMap();
}

size_t Map::width() const {
    return m_width;
}
size_t Map::height() const {
    return m_height;
}

void Map::generateMap() {
    srand(time(NULL));
    int chance = 0;
    for (auto i = 0ul; i < m_height * m_width; ++i) {
//        for (auto j = 0ul; j < m_width; j++){
            chance = rand() % 100;
            if (chance <= 70)
                m_map[i] = '.';
            else if (chance <= 85)
                m_map[i] = 'T';
            else
                m_map[i] = '@';
    }
}
void Map::outputMap() const {
    for (auto i = 0ul, j = 0ul, l = 1ul; i < m_height * m_width; ++i, l++) {
        if (m_player->posX() == l - 1 && m_player->posY() == j) {
            std::cout << m_player->getIdentifier();
        }
        else
            std::cout << m_map[i];
        if ((i + 1) % m_width == 0) {
            std::cout << std::endl;
            j++;
            l = 0;
        }
        else
            std::cout << " ";
    }
}