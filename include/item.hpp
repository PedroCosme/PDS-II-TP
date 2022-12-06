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

/**
 * @brief Lista com os itens do jogo
 */
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

/**
 * @brief Retorna o item pelo ID do objeto
 * @details Retorna o nome do item através de sua ID
 * @param itemId Número de identidade do item
 * @return std::string
 */

std::string getItemById(int itemId);

/**
 * @brief Processa todos os atributos armazenados e funções dos itens do jogo.
 * @details Todas funções dos itens são armazenadas aqui
 *
 */
class Item
{
public:
    /**
     * @brief Construtor do objeto Item
     *
     * @details Inicializa o objeto item com todos seus atributos
     *
     * @param name Nome do item
     * @param price Preço do item
     * @param id Numero de identidade do item
     */
    Item(std::string name = "item nulo", int price = 0, int id = 0);

    /**
     * @brief Retorna um item pelo nome
     * @details Ao digitar o nome de um item ele é retornado
     * @param name Nome do item como string
     * @return * ITEMS
     */
    ITEMS getByName(std::string name);

    /**
     * @brief Imprime o nome do item
     * @details Função que retorna o nome do item
     *
     * @return std::string   Nome do item
     */
    virtual std::string getName();

    /**
     * @brief Imprime o preço do item
     * @details Função que retorna o preço do item
     * @return int   Valor do item
     */
    int getPrice();

    /**
     * @brief Compara nome dos itens do inventário
     * @details Compara o nome dos itens para que sejam organizados em ordem alfabética dentro do inventário do jogador
     *
     * @param rhs Item do lado direito
     * @return booleano que auxilia na comparação de ordenação do mapa
     */
    bool operator<(const Item &rhs) const;

public:
    /**
     * @brief  Nome do item
     *
     */
    std::string _name;

    /**
     * @brief Preço do item
     *
     */
    int _price;

    /**
     * @brief Numero de identidade do item
     *
     */
    int _id;
};

/**
 * @brief Mapa de itens
 * @details Um objeto do tipo item e a quantidade que o jogador tem desse item são a chave
 */

extern std::map<ITEMS, Item> itemList;

#endif
