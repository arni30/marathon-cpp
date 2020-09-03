#include "visitAll.h"

void find_path(std::deque<s_city>& city) {
    int sum{0};

    for (auto i = 0ul; i < city.size(); i++) {
        sum = 0;
        for (auto j = i, k = 0ul; k < city.size(); j++, k++) {
            if (j == city.size())
                j = 0;
            sum = sum + city[j].stamina - city[j].distance;
            if (sum < 0)
                break;
        }
        if (sum >= 0) {
            for (auto j = i, k = 0ul; k < city.size(); j++, k++) {
                if (j == city.size())
                    j = 0;
                std::cout << city[j].index << ". " << city[j].name << std::endl;
            }
            break;
        }
        else if (i == city.size() - 1) {
            std::cerr << "Mission: Impossible" << std::endl;
        }
    }
}

void sepparate_by_comma(const char **argv, int i, std::deque<s_city>& city) {
    std::vector<std::string>vec;
    std::string str(argv[i]);
    s_city ct;
    std::stringstream stream(argv[i]);
    if (str[str.size() - 1] == ',')
        throw 1;
    while (std::getline(stream, str, ',')) {
        if (!str.empty())
            vec.push_back(str);
        else
            throw 1;
    }
    if (vec.size() != 3)
        throw 1;
    for(auto k = 1ul; k < vec.size(); k++) {
        if (vec[k].find_first_not_of("1234567890") != std::string::npos) throw 1;
    }
    ct.name = vec[0];
    ct.stamina = std::stoi(vec[1]);
    ct.distance = std::stoi(vec[2]);
    ct.index = i - 1;
    city.push_back(ct);
    vec.empty();
}


void fill(const int argc, const char **argv,  std::deque<s_city>& city) {
    for (int i = 1; i < argc; ++i) {
        try {
            sepparate_by_comma(argv, i, city);
        }
        catch (...) {
            std::cerr << "Argument " << argv[i] << " is not valid" << std::endl;
            exit(1);
        }
    }
}

void validationArguments(const int argc) {
    if (argc < 2) {
        std::cerr << "usage: ./visitAll [name,stamina,distance]" << std::endl;
    }
}

void visitAll(const int argc, const char **argv) {
    std::deque<s_city>city;

    validationArguments(argc);
    fill(argc, argv, city);
    find_path(city);


}