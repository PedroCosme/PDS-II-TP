#ifndef _SHOP_HPP_
#define _SHOP_HPP_

#include <map>

#include "equipment.hpp"
#include "weapon.hpp"

class Shop
{
private:
    Equipment _equipment;

public:
    Shop(void);
    ~Shop(void);

    void setEquipmentAndPrices(const std::map<ITEMS, unsigned int> &itemsAndPrices) noexcept;
    const Equipment &getEquipment(void) const noexcept;
    const unsigned int getCostOf(ITEMS item) const noexcept;
};

#endif