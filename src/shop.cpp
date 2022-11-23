#include "shop.hpp"

Shop::Shop(void)
    : _equipment(Equipment())
{
}

Shop::~Shop(void)
{
}

void Shop::setEquipmentAndPrices(const std::map<ITEMS, unsigned int> &itemsAndPrices)
{
    _equipment.clear();
    for (auto itemAndPrice : itemsAndPrices)
    {
        _equipment.addItem(itemAndPrice.first, itemAndPrice.second);
    }
}

const Equipment &Shop::getEquipment(void) const
{
    return _equipment;
}

const unsigned int Shop::getCostOf(ITEMS item) const
{
    auto items = _equipment.getItems();
    if (items.count(item) == 1)
    {
        return items[item];
    }
    return 0;
}
