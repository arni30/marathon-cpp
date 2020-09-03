#include "vampireRabbits.h"

void children(int chance, std::list<rabb>& rabbit_list, rabb rabbit, counters& count) {
    int childrens{0};
    if (count.no_vampires_male < count.no_vampires_female)
        childrens = count.no_vampires_male;
    else
        childrens = count.no_vampires_female;
    for (int i = 0; i < childrens; ++i) {
        chance = std::rand() % 100;
        male_female(chance, rabbit, count);
        vampire_or_no(chance, rabbit, count);
        rabbit.rabbit.age = 0;


        rabbit_list.push_back(rabbit);
    }
}

void vampire_kus_kus(std::list<rabb>& rabbit_list, counters& count) {
    int kus = 0;
    int vamp{count.vampire - count.vampire_no_kus};
    for (auto j = rabbit_list.begin(); j != rabbit_list.end(); j++) {
        if (kus == vamp)
            break;
        if (j->rabbit.isVampire == false) {
            kus++;
            count.vampire++;
            count.vampire_no_kus++;
            j->rabbit.isVampire = true;
            j->kus = false;
        }
    }
}

void main_cycle(std::list<rabb>& rabbit_list, counters& count, int& chance, rabb& rab) {
    while (rabbit_list.size() < 1000 && rabbit_list.size() > 0) {
        vampire_kus_kus(rabbit_list, count);
        children(chance, rabbit_list, rab, count);
        age(rabbit_list, count);
        if(count.male + count.female < 1000) {
            std::cout << std::endl;
            output(count);
            sleep(1);
        }
    }
}