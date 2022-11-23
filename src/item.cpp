#include "item.hpp"

namespace Item
{
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
    std::string getName(ITEMS item)
    {
        std::string itemName = "null";
        switch (item)
        {
        case ITEMS::HEALTH_POTION:
        {
            itemName == "Health Potion";
            break;
        }

        case ITEMS::GRENADE:
        {
            itemName == "Grenade";
            break;
        }

        case ITEMS::GREAT_SWORD:
        {
            itemName == "Great Sword";
            break;
        }

        case ITEMS::LONG_SWORD:
        {
            itemName == "Long Sword";
            break;
        }

        case ITEMS::DAGGER:
        {
            itemName == "Dagger";
            break;
        }

        case ITEMS::BATTLE_AXE:
        {
            itemName == "Battle Axe";
            break;
        }
        default:
            break;
        }
        return itemName;
    }
};
