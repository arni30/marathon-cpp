#include "vampireRabbits.h"


void male_female(int& chance, rabb& rabbit, counters& count) {
    if (chance < 50) {
        rabbit.rabbit.gender = Gender::Male;
        count.male++;
    }
    else if(chance >= 50) {
        rabbit.rabbit.gender = Gender::Female;
        count.female++;
    }
}

void age(std::list<rabb>& rabbit_list, counters& count) {
    for (auto j = rabbit_list.begin(); j != rabbit_list.end(); j++) {
        if (j->rabbit.age > 3 && j->rabbit.isVampire == false) {
            if (j->rabbit.gender == Gender::Male) {
                count.male--;
                count.no_vampires_male--;
            }
            else {
                count.female--;
                count.no_vampires_female--;
            }
            rabbit_list.erase(j);
        }
        else if (j->rabbit.age > 8 && j->rabbit.isVampire == true) {
            if (j->kus == false)
                count.vampire_no_kus--;
            else
                count.vampire--;
            rabbit_list.erase(j);
        }
        j->rabbit.age++;
    }
}

void vampire_or_no(int& chance, rabb& rabbit, counters& count) {
    if (chance == 1) {
        rabbit.rabbit.isVampire = true;
        rabbit.kus= true;
        count.vampire++;
    } else if (chance != 1)
        rabbit.rabbit.isVampire = false;
    if (rabbit.rabbit.isVampire == false && rabbit.rabbit.gender == Gender::Male) {
        count.no_vampires_male++;
    }
    if (rabbit.rabbit.isVampire == false && rabbit.rabbit.gender == Gender::Female) {
        count.no_vampires_female++;
    }
}


void output(counters count) {
    std::cout << "Males: " << count.male << std::endl;
    std::cout << "Females: " << count.female << std::endl;
    std::cout << "Vampire: " << count.vampire << std::endl;
}

void vampireRabbits() {
    int chance = 0;
    std::list<rabb>rabbit_list{};
    rabb rab;
    counters count;

    count.no_vampires_female = 0;
    count.no_vampires_male = 0;
    count.male = 0;
    count.female = 0;
    count.vampire = 0;
    count.vampire_no_kus = 0;
    rab.kus = 0;
    srand(time(NULL));
    for (int i = 0; i < 10; ++i) {
        chance = std::rand() % 100;
        male_female(chance, rab, count);
        vampire_or_no(chance, rab, count);
        rab.rabbit.age = 0;
        rabbit_list.push_back(rab);
    }
    output(count);
    main_cycle(rabbit_list, count, chance, rab);
}