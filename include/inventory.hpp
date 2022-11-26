#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <string>
#include <list>
#include "weapon.hpp"
#include "utilities.hpp"
#include "item.hpp"
#include <map>
#include "playableCharacter.hpp"

class Inventory : public Item
{
public:
    // Inventory(std::map<Item, int> _inventory);
    Inventory();
    ~Inventory();

    std::map<Item, int> createInventory();

    void useItem(Item item);

    void subtractItem(Item item);

    void displayInventory();

    bool operator<(const Item &rhs) const;

    void addItem(Item item);

public:
    std::map<Item, int> _inventory;
};

#endif