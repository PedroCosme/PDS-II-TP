#ifndef _ITEMS_HPP_
#define _ITEMS_HPP_

#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <iostream>
#include <iterator>
#include "utilities.hpp"
#include <map>

enum class ITEMS
{
    NULL_ITEM,
    HEALTH_POTION,
    GRENADE,
    GREAT_SWORD,
    LONG_SWORD,
    DAGGER,
    BATTLE_AXE
};
std::string getItemById(int itemId);

class Item
{
public:
    Item(std::string name = "item nulo", int price = 0, int id = 0);
    ITEMS getByName(std::string name);
    std::string getName() const;
    int getPrice();
    bool operator<(const Item &rhs) const;

public:
    std::string _name;
    int _price;
    int _id;
};

extern std::map<ITEMS, Item> itemList;

#endif
