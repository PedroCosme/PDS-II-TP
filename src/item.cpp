#include "item.hpp"

namespace Item
{
    ITEMS getByName(std::string name){
        ITEMS item = ITEMS::NULL_ITEM;
        switch (item)
        {
        case "health potion":{
            item == ITEMS::HEALTH_POTION;
            break;
        }

        case "grenade":{
            item == ITEMS::GRENADE;
            break;
        }

        case "great sword":{
            item == ITEMS::GREAT_SWORD;
            break;
        }

        case "long sword":{
            item == ITEMS::LONG_SWORD;
            break;
        }

        case "dagger":{
            item == ITEMS::DAGGER;
            break;
        }

        case "battle axe":{
            item == ITEMS::BATTLE_AXE;
            break;
        }
        default:
            break;
        }
        
        return item;
    }
    std::string getName(ITEMS item){
        std::string itemName = "null";
        switch (item)
        {
        case ITEMS::HEALTH_POTION:{
            itemName == "Health Potion";
            break;
        }

        case ITEMS::GRENADE:{
            itemName == "Grenade";
            break;
        }

        case ITEMS::GREAT_SWORD:{
            itemName == "Great Sword";
            break;
        }

        case ITEMS::LONG_SWORD:{
            itemName == "Long Sword";
            break;
        }

     case ITEMS::DAGGER:{
            itemName == "Dagger";
            break;
        }

        case ITEMS::BATTLE_AXE:{
            itemName == "Battle Axe";
            break;
        }
        default:
            break;
        }
        return itemName;
    }
};
