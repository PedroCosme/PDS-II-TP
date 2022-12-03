/**
 * @file shop.hpp
 * @author Victória Tejada (victoriatsiqueiram@gmail.com)
 * @brief Classe principal com a lógica do shop
 * @version 1.0
 * @date 2022-12-03
 * @details Responsável por armazenar e processar todas as informações relevantes sobre o shop. Consiste em disponibilizar compras do usuário durante a partida.
 * @copyright Copyright (c) 2022
 * 
 */

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
