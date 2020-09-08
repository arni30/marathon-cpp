//
// Created by Oleksandr Arnopolin on 9/8/20.
//

#ifndef MIGHTYWIZARD_MIGHTYWIZARD_H
#define MIGHTYWIZARD_MIGHTYWIZARD_H
#include "AbstractWizard.h"
#include "../Food/FoodItem.h"
#include <iostream>

class MightyWizard : public AbstractWizard{
    public:
        void deductFoodType() override;
    void checkFood(FoodItem* foodItem);
    void checkFood(FoodItem& foodItem);
};


#endif //MIGHTYWIZARD_MIGHTYWIZARD_H
