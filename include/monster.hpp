/**
 * @file monster.hpp
 * @author Victória Tejada (victoriatsiqueiram@gmail.com)
 * @brief Classe principal com a lógica de monster
 * @version 1.0
 * @date 2022-12-03
 * @details Responsável por armazenar e processar todas as informações relevantes sobre os monstros do jogo.
 * @copyright Copyright (c) 2022
 *
 */

#ifndef _MONSTER_HPP_
#define _MONSTER_HPP_

#include <string>
#include <cmath>
#include "utilities.hpp"

class Monster
{

public:
        Monster(std::string name, int currentHp, uint maxHp, uint maxDamage,
                uint minDamage);
        ~Monster();

        std::string getName() const;

        int getCurrentHp();

        bool isAlive() const;

        bool damage(unsigned int damageAmount);

        std::string currentHealth() const;

        void takeDamage(unsigned int damage);

        unsigned int monsterDamage();

        uint getMaximumHp() const;

        virtual std::string ToString() const;

protected:
        std::string _name;
        int _currentHp;
        uint _maxHp;
        uint _maxDamage;
        uint _minDamage;
};

#endif
