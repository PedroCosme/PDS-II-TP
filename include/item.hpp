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

class Item
{
public:
    Item(std::string name, int price);
    ITEMS getByName(std::string name);
    std::string getName(ITEMS item);

private:
    std::string _name;
    int _price;
};

extern std::map<ITEMS, Item> itemList;

#endif
