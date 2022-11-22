#include <iostream>
#include <string>
#include <set>
#include "equipment.hpp"

Equipment::Equipment(void)
{
    _capacity = 10U;
    _items = std::map<ITEMS, unsigned int>();
};

Equipment::~Equipment(void)
{
    _items.clear();
}

void Equipment::addItem(ITEMS itemId, unsigned int quantity)
{
    bool itemAdded = false;

    if (_items.find(itemId) != _items.end())
    {
        _items[itemId] += quantity;
        itemAdded = true;
    }
    else if (_items.size() < _capacity)
    {
        _items[itemId] = quantity;
        itemAdded = true;
    }
}

void Equipment::removeItem(ITEMS itemId, unsigned int quantity)
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
}

void Equipment::clear(void)
{
    _items.clear();
}

const std::map<ITEMS, unsigned int> &Equipment::getItems(void) const
{
    return _items;
}