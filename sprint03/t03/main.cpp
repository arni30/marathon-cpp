#include<iostream>
#include<string>
#include <vector>
#include <array>
#include <list>
#include"sumFileData.h"

int main(int argc, char** argv) {
    std::cout << sumFileData<double>("example1.txt") << std::endl;
    return 0;
}