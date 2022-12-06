#include "item.hpp"
#include "excecao.hpp"
#include <exception>
Item::Item(std::string name, int price, int id)
    : _name(name), _price(price), _id(id) {}

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
std::string getItemById(int itemId)
{
    std::string itemName;

    switch (itemId)
    {
    
    case 1:
        itemName = "Health Potion";
        return itemName;

    case 2:
        itemName = "Grenade";
        return itemName;

    case 3:
        itemName = "dagger";
        return itemName;

    case 4:
        itemName = "Long Sword";
        return itemName;

    case 5:
        itemName = "Great Sword";
        return itemName;

    case 6:
        itemName = "Battle Axe";
        return itemName;

    default:

        break;
    }
}

std::string Item::getName()
{
    return _name;
}

int Item::getPrice()
{
    return _price;
}
std::map<ITEMS, Item> itemList = std::map<ITEMS, Item>{
    {ITEMS::NULL_ITEM, Item("NULL", 0, 0)},
    {ITEMS::HEALTH_POTION, Item("Health Potion", 50)},
    {ITEMS::GRENADE, Item("Grenade", 80)},
    {ITEMS::GREAT_SWORD, Item("Great Sword", 180)},
    {ITEMS::BATTLE_AXE, Item("Battle Axe", 220)},
    {ITEMS::DAGGER, Item("Dagger", 50)},
    {ITEMS::LONG_SWORD, Item("Long sword", 120)},

};

bool Item::operator<(const Item &rhs) const
{
    return (_name < rhs._name);
}
