#ifndef _SHOP_HPP_
#define _SHOP_HPP_

#include <map>

#include "equipment.hpp"
#include "weapon.hpp"
#include "item.hpp"
#include "playableCharacter.hpp"

class Shop
{

    void buyItem(std::string itemName);
    // private:
    //     Equipment _equipment;

    // public:
    //     Shop(void);
    //     ~Shop(void);

    //     void setEquipmentAndPrices(const std::map<ITEMS, unsigned int> &itemsAndPrices);
    //     const Equipment &getEquipment(void) const;
    //     const unsigned int getCostOf(ITEMS item) const;
};

#endif