#include "inventory.hpp"

Inventory::Inventory(std::map<Item, int> inventory) : _inventory(inventory){};

Inventory::~Inventory(){};

std::map<Item, int> Inventory::createInventory()
{
    Item healthPotion("Health Potion", 50);
    Item grenade("Grenade", 80);
    Item greatSword("Great Sword", 180);
    Item battleAxe("Battle Axe", 220);
    Item dagger("Dagger", 50);
    Item longSword("Long sword", 120);

    _inventory.insert({healthPotion, 2});
    _inventory.insert({grenade, 0});
    _inventory.insert({greatSword, 0});
    _inventory.insert({dagger, 1});
    _inventory.insert({longSword, 0});

    return _inventory;
}

bool Inventory::operator<(const Item &item) const
{
    return (_name < item._name);
}

std::map<Item, int> subtractItem(std::map<Item, int> inventory, Item item)
{
    if (inventory.at(item) > 0)
    {
        inventory.at(item) - 1;
        return inventory;
    }
    else
    {
        std::cout << "You don't have enough of that item." << std::endl;
    }
}

std::map<Item, int> addItem(std::map<Item, int> inventory, Item item)
{

    inventory.at(item) + 1;
    std::cout << "You bought one" << item.getName() << std::endl;
    return inventory;
}

void displayInventory(std::map<Item, int> inventory)
{
    for (auto const &pair : inventory)
    {
        std::cout << "{" << pair.first.getName() << ": " << pair.second << "}\n";
    }
}
