#include "shop.hpp"

Shop::Shop(void)
    : _equipment(Equipment())
{
}

Shop::~Shop(void)
{
}

void Shop::setEquipmentAndPrices(const std::map<ITEMS, uint> &itemsAndPrices) noexcept
{
    _equipment.clear();
    for (auto itemAndPrice : itemsAndPrices)
    {
        _equipment.addItem(itemAndPrice.first, itemAndPrice.second);
    }
}

const Equipment &Shop::getEquipment(void) const noexcept
{
    return _equipment;
}

const uint Shop::getCostOf(ITEMS item) const noexcept
{
    auto items = _equipment.getItems();
    if (items.count(item) == 1)
    {
        return items[item];
    }
    return 0;
}
