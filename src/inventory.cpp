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

    _inventory.insert({healthPotion, 1});
    _inventory.insert({grenade, 0});
    _inventory.insert({greatSword, 0});
    _inventory.insert({dagger, 1});
    _inventory.insert({longSword, 0});

    return _inventory;
}
