/**
 * @file shop.hpp
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
#include <tabulate/table.hpp>

/**
 * @brief  Comprar item
 * @details Função responsável pela compra de itens dentro do jogo
 *
 * @param itemId Número de identificação do item
 * @return int
 */
int buyItem(int itemId);

/**
 * @brief Checa se o jogador quer ir para loja
 * @details  Serve para checar com o jogador se ele quer entrar na loja ou dar continuidade ao jogo
 * @param c caracter que determina se o jogador quer entrar na loja
 * @param player ponteiro para jogador
 * @param inventory ponteiro para Inventario
 */
void checkBuy(char c, PlayableCharacter *player, Inventory *inventory);

#endif