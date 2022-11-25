#include "item.hpp"

Item::Item(std::string name, int price)
    : _name(name), _price(price) {}

ITEMS getByName(std::string name)
{
    ITEMS item = ITEMS::NULL_ITEM;
    if (toLower(name) == "health potion")
    {
        item = ITEMS::HEALTH_POTION;
    }
    else if (toLower(name) == "grenade")
    {
        item = ITEMS::GRENADE;
    }
    else if (toLower(name) == "great sword")
    {
        item = ITEMS::GREAT_SWORD;
    }
    else if (toLower(name) == "long sword")
    {
        item == ITEMS::LONG_SWORD;
    }
    else if (toLower(name) == "dagger")
    {
        item = ITEMS::DAGGER;
    }
    else if (toLower(name) == "battle axe")
    {
        item = ITEMS::BATTLE_AXE;
    }
    return item;
}
std::string Item::getName()
{
    return _name;
}
std::map<ITEMS, Item> itemList = std::map<ITEMS, Item>{
    {ITEMS::NULL_ITEM, Item("NULL", 0)},
    {ITEMS::HEALTH_POTION, Item("Health Potion", 50)},
    {ITEMS::GRENADE, Item("Grenade", 80)},
    {ITEMS::GREAT_SWORD, Item("Great Sword", 180)},
    {ITEMS::BATTLE_AXE, Item("Battle Axe", 220)},
    {ITEMS::DAGGER, Item("Dagger", 50)},
    {ITEMS::LONG_SWORD, Item("Long sword", 120)},

};
