#include <iostream>
#include <string>
#include <set>
#include "equipment.hpp"

Equipment::Equipment(void)
{
    _capacity = 10U;
    _items = std::map<WEAPONS, unsigned int>();
};

Equipment::~Equipment(void)
{
    _items.clear();
}

bool Equipment::addItem(WEAPONS itemId, unsigned int quantity)
{
    bool itemAdded = false;
    // IF object is in inventory already
    if (_items.find(itemId) != _items.end())
    {
        _items[itemId] += quantity;
        itemAdded = true;
    }
    // ELSE IF inventory not full
    else if (_items.size() < _capacity)
    {
        _items[itemId] = quantity;
        itemAdded = true;
    }
    return itemAdded;
}

bool Equipment::removeItem(WEAPONS itemId, unsigned int quantity)
{
    bool itemRemoved = false;
    if (_items.find(itemId) != _items.end())
    {
        _items[itemId] -= quantity;
        if ((int)_items[itemId] - (int)quantity < 1)
        {
            _items.erase(itemId);
        }
        itemRemoved = true;
    }
    return itemRemoved;
}

void Equipment::clear(void)
{
    _items.clear();
}

const std::map<WEAPONS, unsigned int> &Equipment::getItems(void)
{
    return _items;
}