/**
 * @file item.hpp
 * @author Victória Tejada (victoriatsiqueiram@gmail.com)
 * @brief Classe principal com a lógica dos itens
 * @version 1.0
 * @date 2022-12-03
 * @details Responsável por armazenar e processar toda a lógica dos itens do usuário durante o jogo.
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _ITEMS_HPP_
#define _ITEMS_HPP_

#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <iostream>
#include <iterator>
#include "utilities.hpp"
#include <map>

enum class ITEMS
{
    NULL_ITEM,
    HEALTH_POTION,
    GRENADE,
    GREAT_SWORD,
    LONG_SWORD,
    DAGGER,
    BATTLE_AXE
};
std::string getItemById(int itemId);

class Item
{
public:
    Item(std::string name = "item nulo", int price = 0, int id = 0);
    ITEMS getByName(std::string name);
    std::string getName() const;
    int getPrice();
    bool operator<(const Item &rhs) const;

public:
    std::string _name;
    int _price;
    int _id;
};

extern std::map<ITEMS, Item> itemList;

#endif
