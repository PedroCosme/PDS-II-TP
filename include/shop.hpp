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
#include "inventory.hpp"

int buyItemStr(std::string itemName);
int buyItem(int itemId);
void checkBuy(char c, PlayableCharacter player, Inventory* inventory);

#endif