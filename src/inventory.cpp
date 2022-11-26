#include "inventory.hpp"

// Inventory::Inventory(std::map<Item, int> inventory) : _inventory(inventory){};
Inventory::Inventory(){};

Inventory::~Inventory(){};

std::map<Item, int> Inventory::createInventory()
{
    Item healthPotion("Health Potion", 50);
    Item grenade("Grenade", 80);
    Item greatSword("Great Sword", 180);
    Item battleAxe("Battle Axe", 220);
    Item dagger("Dagger", 50);
    Item longSword("Long sword", 120);

    // _inventory.insert({healthPotion, 2});
    // _inventory.insert({grenade, 0});
    // _inventory.insert({greatSword, 0});
    // _inventory.insert({dagger, 1});
    // _inventory.insert({longSword, 0});

    _inventory[healthPotion] = 2;
    _inventory[grenade];
    _inventory[greatSword];
    _inventory[dagger]++;
    _inventory[longSword];

    return _inventory;
}

bool Inventory::operator<(const Item &rhs) const
{
    return (_name < rhs._name);
}

std::map<Item, int> Inventory::subtractItem(Item item)
{
    std::cout << _inventory.at(item) << std::endl;
    if (_inventory[item] > 0)
    {
        _inventory[item]--;
        return _inventory;
    }
    else
    {
        std::cout << "You don't have enough of that item." << std::endl;
    }
}

std::map<Item, int> Inventory::addItem(Item item)
{

    _inventory[item]++;
    std::cout << "You bought one" << item.getName() << std::endl;
    return _inventory;
}

void Inventory::displayInventory()
{

    for (auto const &pair : _inventory)
    {
        std::cout << "{" << pair.first.getName() << ": " << pair.second << "}\n";
    }
}
