/**
 * @file weapon.hpp
 * @brief Classe principal responsavel pela lógica de weapon
 * @version 1.0
 * @date 2022-12-03
 * @details Responsável por armazenar e processar todas as informações relevantes sobre weapon. Todas as armas do usuário estão armazenadas nessa classe.
 * @copyright Copyright (c) 2022
 *
 */

#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_

#include <string>
#include <map>
#include <iostream>
#include <iterator>
#include "utilities.hpp"
#include "item.hpp"

/**
 * @brief Lista com as armas do jogo
 */
enum class WEAPONS
{
    UNARMED,
    GREATSWORD,
    LONGSWORD,
    DAGGER,
    BATTLEAXE
};

/**
 * @brief Contém todos os atributos armazenados e funções dos objetos do tipo arma do jogo.
 *
 */
class Weapon : public Item
{

public:
    /**
     * @brief Construtor do objeto Weapon
     *
     * @details Inicializa o objeto weapon
     *
     * @param name Nome da arma
     * @param minDamage dano minímo da arma
     * @param maxDamage dano máximo da arma
     */
    Weapon(std::string name, unsigned int minDamage, unsigned int maxDamage, int price, int id);

    /**
     * @brief Retorna uma arma pelo seu nome
     * @details Ao digitar o nome de uma arma ele é retornado
     * @param name Nome do da arma como string
     * @return * objeto do tipo WEAPONS
     */
    WEAPONS getFromName(std::string weaponName);

    /**
     * @brief Retorna o nome da arma
     * @details Função que retorna o nome do item
     *
     * @return std::string Nome do item
     */
    std::string getName();

    /**
     * @brief Retorna o alcance do dano da arma
     *
     * @return uint alcance do dano
     */
    unsigned int damageRange();

    /**
     * @brief Retorna o dano causado pela arma
     *
     * @return uint dano causado pela arma
     */
    unsigned int getDamage();

private:
    /**
     * @brief  Nome do item
     *
     */
    std::string _name;

    /**
     * @brief  dano minímo
     *
     */
    unsigned int _minimumDamage;

    /**
     * @brief  dano máximo
     *
     */
    unsigned int _maximumDamage;
};

extern std::map<WEAPONS, Weapon> availableWeapons;

#endif
