#ifndef _VAMPIRE_HPP_
#define _VAMPIRE_HPP_

#include "monster.hpp"
#include <iostream>

/**
 * @brief Armazena todas informações referentes ao inimigo final do jogo, o vampiro.
 *
 * @details
 */

class Vampire : public Monster
{
public:
    /**
     * @brief Construtor do vampiro, inimigo final do jogo.
     *
     * @details Inicializa os atributos do vampiro com seus respectivos valores numéricos defaults.
     *
     * @param name Nome do personagem ou monstro
     * @param currentHp Valor do HP atual
     * @param maxDamage Valor máximo de dano
     * @param minDamage Valor mínimo de dano
     * @param maxHp Valor máximo de HP

     */
    Vampire(std::string name = "Vampire", uint currentHp = 150, uint maxDamage = 2, uint minDamage = 18, uint maxHp = 150);
    /**
     * @brief Destroi o objeto vampiro
     *
     */
    ~Vampire();

    /**
     *@brief Ataque especial do vampiro
     *@details Ataque especial do vampiro que faz com que ele recupere vida
     * @return uint que representa o dano causado
     */
    uint drainBlood();

private:
};

#endif