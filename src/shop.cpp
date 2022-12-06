#include "shop.hpp"

Item healthPotion("Health Potion", 50, 1);
Item grenade("Grenade", 80, 2);
Item dagger("Dagger", 50, 3);
Item longSword("Long sword", 120, 4);
Item greatSword("Great Sword", 180, 5);
Item battleAxe("Battle Axe", 220, 6);

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
void checkBuy(char c, PlayableCharacter *player, Inventory *inventory)
{

    while (c == 's')
    {
        Table shopT;

        int desiredItem;
        std::string desiredItemStr;
        std::cout << "What are you buying, stranger?" << std::endl;
        shopT.add_row({"Item", "Price"});
        shopT.add_row({"Available Gold", std::to_string(player->getGold())});
        shopT.add_row({"Health Potion - heals for 45 HP.", std::to_string(healthPotion.getPrice())});
        shopT.add_row({"Grenade - deals 30%% of monster health damage", std::to_string(grenade.getPrice())});
        shopT.add_row({"Dagger - damage: 2 - 8", std::to_string(dagger.getPrice())});
        shopT.add_row({"Long Sword - damage: 4 - 12", std::to_string(longSword.getPrice())});
        shopT.add_row({"Great Sword - damage: 6 - 16", std::to_string(greatSword.getPrice())});
        shopT.add_row({"Battle Axe - damage: 8 - 20", std::to_string(battleAxe.getPrice())});
        shopT.format()
            .font_style({FontStyle::bold})
            .border_top("-")
            .border_bottom("-")
            .border_left("-")
            .border_right("-")
            .corner("+");
        shopT[0].format().padding_top(1).padding_bottom(1).font_align(FontAlign::center).font_style({FontStyle::underline}).font_background_color(Color::yellow);
        std::cout << shopT << std::endl;
        std::cin >> desiredItem;

        int itemPrice = buyItem(desiredItem);
        player->subtractGold(itemPrice);
        desiredItemStr = getItemById(desiredItem);
        inventory->addItem(desiredItemStr);
        std::cout << "Current inventory:" << std::endl;
        switch (desiredItem)
        {
        case 4:
            player->changeWeapon(availableWeapons.at(WEAPONS::LONGSWORD));
            break;
        case 5:
            player->changeWeapon(availableWeapons.at(WEAPONS::GREATSWORD));
            break;
        case 6:
            player->changeWeapon(availableWeapons.at(WEAPONS::BATTLEAXE));
            break;
        default:
            break;
        }
        inventory->displayInventory(player);
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