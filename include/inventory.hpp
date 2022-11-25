#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <string>
#include <list>
#include "equipment.hpp"
#include "weapon.hpp"
#include "utilities.hpp"

class Inventory
{
public:
    Inventory(std::map<int, Equipment> equipments);
    ~Inventory();
    std::map<int, Equipment> addItem(std::string itemName);

    void useItem(Item item);

    std::map<int, Equipment> subtractItem(std::map<int, Equipment> equipments);

public:
    std::map<int, Equipment> _equipments;
};

#endif