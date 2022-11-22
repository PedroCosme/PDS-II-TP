#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <map>
#include <string>
#include "item.hpp"

class Equipment
{
public:
  Equipment(void);
  ~Equipment(void);

  void addItem(ITEMS itemId, unsigned int quantity = 1);

  void removeItem(ITEMS itemId, unsigned int quantity = 1);

  void clear(void);

  const std::map<ITEMS, unsigned int> &getItems(void) const;

private:
  std::map<ITEMS, unsigned int> _items;
  unsigned int _capacity;
};

#endif