#ifndef _EQUIPINVENTORY_HPP_
#define _EQUIPINVENTORY_HPP_

#include <map>
#include <string>
#include "equipment.hpp"

class EquipInventory
{
private:
    std::map<Equipment, unsigned int> equipments;

public:
    EquipInventory(void);
    ~EquipInventory(void);

    // Adds quantity of item to inventory. If inventory is full, returns false.
    void AddItem(Equipment itemId, unsigned int quantity = 1);
    // Returns a string representation of the inventory. itemname:quantity;
    const std::map<Equipment, unsigned int> &getEquipments(void) const;
};

#endif