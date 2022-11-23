#ifndef _ITEMS_HPP_
#define _ITEMS_HPP_

#include <string>
#include <vector>
#include <iostream>


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

namespace Item
{
    ITEMS getByName(std::string name);
    std::string getName(ITEMS item);
};

#endif
