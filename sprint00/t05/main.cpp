#include <iostream>

auto validation (char **argv, int argc) {
    auto counter = 1;

    if (argc != 5) {
        std::cerr << "usage:./automaton [name] [level] [health] [stamina]\n";
        exit(1);
    }
    else {
        try{
            std::stoi(argv[++counter]);
            std::stof(argv[++counter]);
            std::stod(argv[++counter]);
        }
        catch (std::invalid_argument) {
            std::cerr << "Invalid argument: " << argv[counter] << std::endl;
            exit(1);
        }
    }
};
void print_result (char **argv) {
    auto counter = 0;

    std::cout << "Name = " << argv[++counter] << std::endl;
    std::cout << "Level = " << argv[++counter] << std::endl;
    std::cout << "Health = " << argv[++counter] << std::endl;
    std::cout << "Stamina = " << argv[++counter] << std::endl;
}


int main(int argc, char **argv) {
    validation(argv, argc);
    print_result(argv);
    return 0;
}
