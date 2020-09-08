//
// Created by Oleksandr Arnopolin on 9/8/20.
//

#ifndef MIGHTYWIZARD_FOODITEM_H
#define MIGHTYWIZARD_FOODITEM_H


class FoodItem {
    public:
        FoodItem();
        virtual ~FoodItem();
    void checkFood(FoodItem* foodItem);
    void checkFood(FoodItem& foodItem);
};


#endif //MIGHTYWIZARD_FOODITEM_H
