#include "shop.hpp"

Item healthPotion("Health Potion", 50, 1);
Item grenade("Grenade", 80, 2);
Item dagger("Dagger", 50, 3);
Item longSword("Long sword", 120, 4);
Item greatSword("Great Sword", 180, 5);
Item battleAxe("Battle Axe", 220, 6);

int buyItemStr(std::string itemName)
{

    int itemPrice;
    if (toLower(itemName) == "health potion")
    {
        int itemPrice = healthPotion.getPrice();
    }
    else if (toLower(itemName) == "grenade")
    {
        int itemPrice = grenade.getPrice();
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

int buyItem(int itemId)
{

    int itemPrice;
    switch (itemId)
    {
    case 1:
        itemPrice = healthPotion.getPrice();
        return itemPrice;

    case 2:
        itemPrice = grenade.getPrice();
        return itemPrice;

    case 3:
        itemPrice = dagger.getPrice();
        return itemPrice;

    case 4:
        itemPrice = longSword.getPrice();
        return itemPrice;

    case 5:
        itemPrice = greatSword.getPrice();
        return itemPrice;

    case 6:
        itemPrice = battleAxe.getPrice();
        return itemPrice;

    default:
        break;
    }
}
void checkBuy(char c, PlayableCharacter player, Inventory* inventory)
{

    while (c == 's')
    {

        int desiredItem;
        std::string desiredItemStr;
        std::cout << "What are you buying, stranger?" << std::endl
                  << "Available gold: " << player.getGold() << std::endl
                  << "SHOP" << std::endl
                  << "|| Health Potion - 1 || Grenade - 2 || Dagger - 3 || Long Sword - 4 || Great Sword - 5 || Battle Axe - 6 || " << std::endl;
        std::cin >> desiredItem;

        int itemPrice = buyItem(desiredItem);
        player.subtractGold(itemPrice);
        desiredItemStr = getItemById(desiredItem);
        inventory->addItem(desiredItemStr);
        std::cout << "Current inventory:" << std::endl;
        inventory->displayInventory();
        std::cout << "Do you want to buy something else? (y/n)" << std::endl;
        char yn;
        std::cin >> yn;
        if (yn == 'y')
        {
            continue;
        }
        else
        {

            break;
        }
    }
}