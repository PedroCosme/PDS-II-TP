#ifndef _SHOP_HPP_
#define _SHOP_HPP_

#include <map>
#include <iostream>
#include <cstdlib>
#include "weapon.hpp"
#include "item.hpp"
#include "playableCharacter.hpp"

int buyItemStr(std::string itemName);
int buyItem(int itemId);

// private:
//     Equipment _equipment;

// public:
//     Shop(void);
//     ~Shop(void);

//     void setEquipmentAndPrices(const std::map<ITEMS, unsigned int> &itemsAndPrices);
//     const Equipment &getEquipment(void) const;
//     const unsigned int getCostOf(ITEMS item) const;

#endif