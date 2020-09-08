project(mightyWizard)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_library(mightyWizard_src Wizard/MightyWizard.cpp Wizard/MightyWizard.h Food/FoodItem.cpp Food/FoodItem.h Food/FoodType.h Wizard/AbstractWizard.cpp Wizard/AbstractWizard.h)