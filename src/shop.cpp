#include "shop.hpp"

int buyItem(std::string itemName)
{
    Item healthPotion("Health Potion", 50);
    Item grenade("Grenade", 80);
    Item greatSword("Great Sword", 180);
    Item battleAxe("Battle Axe", 220);
    Item dagger("Dagger", 50);
    Item longSword("Long sword", 120);

    int itemPrice;
    if (toLower(itemName) == "health potion")
    {
        int itemPrice = healthPotion.getPrice();
    }
    else if (toLower(itemName) == "grenade")
    {
        int itemPrice = grenade.getPrice();
        // player.subtractGold(itemPrice);
    }
    else if (toLower(itemName) == "great sword")
    {
        int itemPrice = greatSword.getPrice();
    }
    else if (toLower(itemName) == "long sword")
    {
        int itemPrice = longSword.getPrice();
    }
    else if (toLower(itemName) == "battle axe")
    {
        int itemPrice = battleAxe.getPrice();
    }
    else if (toLower(itemName) == "dagger")
    {
        int itemPrice = dagger.getPrice();
    }
    return itemPrice;
}