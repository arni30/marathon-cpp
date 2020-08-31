#include "meadSong.h"

void meadSong() {
    for (auto i = 99; i > 0; i--) {
        if(i == 2)
            std::cout << i << PART1 << i << PART2 << i - 1 << PART3_2 << std::endl;
        else if (i == 1)
            std::cout << ALLPARTS_1 << std::endl;
        else
            std::cout << i << PART1 << i << PART2 << i - 1 << PART3 << std::endl;
        std::cout << std::endl;
    }
    std::cout << END << std::endl;
}