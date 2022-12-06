/**
 * @file inventory.hpp
 * @author Victória Tejada (victoriatsiqueiram@gmail.com)
 * @brief Classe principal com a lógica do inventário
 * @version 1.0
 * @date 2022-12-03
 * @details Responsável por armazenar e processar o inventário do jogador.
 * @copyright Copyright (c) 2022
 *
 */

#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <string>
#include <list>
#include "weapon.hpp"
#include "utilities.hpp"
#include "item.hpp"
#include <map>
#include "excecao.hpp"
#include "playableCharacter.hpp"
#include <tabulate/table.hpp>
using namespace tabulate;

/**
 * @brief Armazena e processa o inventário
 *
 * @details Armazena todos os itens do jogador no inventário com possibilidade de adição, subtração e uso.
 */
class Inventory : public Item
{
public:
    // Inventory(std::map<Item, int> _inventory);

    /**
     * @brief Construtor do objeto Inventario
     *
     * @details Inicializa a estrutura de Inventario
     */
    Inventory();

    /**
     * @brief Destrói o objeto inventário
     *
     */
    ~Inventory();

    /**
     * @brief Cria o inventário do jogador
     *
     * @details Cria o inventário para o jogador armazenar itens durante o jogo
     *
     * @return std::map<Item
     */
    std::map<Item, int> createInventory();

    /**
     * @brief Usa item do inventário
     *
     * @details Função para uso do item pertencente ao inventário do jogador
     *
     * @param item Item do inventário
     */
    void useItem(Item item);

    /**
     * @brief Remove item
     *
     * @details Função que remove item do inventário do jogador
     *
     * @param item Item do inventário
     */
    void subtractItem(Item item);

    /**
     * @brief Mostra o inventário ao jogador
     * @details Inventário é mostrado na tela do jogador
     * @param player Ponteiro para objeto jogador

     */
    void displayInventory(PlayableCharacter *player);

    /**
     * @brief Compara nome dos itens do inventário
     * @details Compara o nome dos itens para que sejam organizados em ordem alfabética dentro do inventário do jogador
     *
     * @param rhs Item do lado direito
     * @return true
     * @return false
     */
    bool operator<(const Item &rhs) const;

    /**
     * @brief Adiciona item ao inventário do jogador
     *
     * @param item Item do inventário
     */
    void addItem(Item item);

    /**
     * @brief Checa quantidade de um item específico presente no inventário
     * @details Função que checa a quantidade exata de um item específico dentro do inventário
     * @param item Item do inventário
     * @return checkValue
     */
    int checkValue(Item item);

    /**
     * @brief Adquire item
     * @details Pega o item
     * @param item Item do inventário
     * @return std::string
     */
    std::string getItemN(Item item);

public:
    /**
     * @brief Mapa de itens
     * @details Um objeto do tipo item e a quantidade que o jogador tem desse item são a chave
     */
    std::map<Item, int> _inventory;
};

#endif
