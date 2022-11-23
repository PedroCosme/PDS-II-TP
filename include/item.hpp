#ifndef _ITEMS_HPP_
#define _ITEMS_HPP_

#include <string>
#include <vector>

enum class ITEMS
{
    NULL_ITEM,
    HEALTHPOTION,
    GRANADE
};

namespace Item
{
    ITEMS getByName(std::string name);
    std::string getName(ITEMS item);
};

#endif
