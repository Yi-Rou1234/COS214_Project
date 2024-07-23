/**
 * @file Meat.cpp
 * @brief Implementation file for the Meat class.
 *        This file contains the implementation of methods to cook Meat-based dishes and add them to the plate.
* @author James Cooks and Monica Hung
* @date 22/10/2023
 */

#include "Meat.h"
#include <iostream>

using namespace std;

/**
 * @brief Default constructor for the Meat class.
 */
Meat::Meat(/* args */)
{
}

/**
 * @brief Cooks Meat-based dishes and adds them to the plate based on order details.
 * @param orderDetails A vector of strings representing the ordered dishes.
 * @param plate Pointer to the Plate object to which the cooked dishes are added.
 */
void Meat::cookFood(vector<string> orderDetails, Plate* plate){
    for (string food : orderDetails)
    {
        if(food == "Meat"){
            //Seed current unix time to rand()
            int quality = rand() % 10 + 1;
            //If quality is 0...1, then the food is burnt so food(burnt)
            //If quality is 2...6, then the food is fine so food(fine)
            //If quality is 7...10, then the food is great so food(great)
            string product = "";
            if (quality <= 1)
            {
                product = "Meat(burnt)";
            }
            else if (quality <= 6)
            {
                product= "Meat(fine)";
            }
            else
            {
                product = "Meat(great)";
            }
            plate->addFood(product);
            //cout << product << " added to plate." << endl;
        }
    }
    if (next != nullptr)
    {
        next->cookFood(orderDetails, plate);
    }
    else{
        plate->printPlate();
    }
    
}

