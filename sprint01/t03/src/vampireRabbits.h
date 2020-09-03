#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <list>
#include <unistd.h>

enum class Gender {
    Male,
    Female
};
struct Rabbit {
    Gender gender;
    bool isVampire;
    int age;
};
struct counters {
    int male;
    int female;
    int vampire;
    int no_vampires_male;
    int no_vampires_female;
    int vampire_no_kus;
};

struct rabb {
    Rabbit rabbit;
    bool kus;
};
void vampireRabbits();
void male_female(int& chance, rabb& rabbit, counters& count);
void age(std::list<rabb>& rabbit_list, counters& count);
void vampire_or_no(int& chance, rabb& rabbit, counters& count);
void children(int chance, std::list<rabb>& rabbit_list, rabb rabbit, counters& count);
void vampire_kus_kus(std::list<rabb>& rabbit_list, counters& count);
void main_cycle(std::list<rabb>& rabbit_list, counters& count, int& chance, rabb& rab);
void output(counters count);
