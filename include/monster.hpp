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

/**
 * @brief Armazena e processa ações e atributos dos monstros dentro durante o jogo
 * @details Movimentação dos monstros é definida por esta classe
 */
class Monster
{

public:
        /**
         * @brief Construtor do objeto monster
         * @details Inicializa o objeto monster com todos seus atributos
         *
         * @param name Nome do monstro
         * @param currentHp Quantidade de HP atual do monstro
         * @param maxHp Quantidade máxima de HP do monstro
         * @param maxDamage Quantidade máxima de dano
         * @param minDamage Quantidade mínima de dano
         */
        Monster(std::string name,
                int currentHp,
                uint maxHp,
                uint maxDamage,
                uint minDamage);

        /**
         * @brief Destrói o objeto monstro
         *
         */
        ~Monster();

        /**
         * @brief Imprime o nome do monstro
         * @details Imprime o nome do monstro na tela
         *
         * @return std::string Nome do monstro
         */
        std::string getName() const;

        /**
         * @brief Imprime a quantidade atual de HP do monstro
         * @details Imprime a quantidade atual de HP do monstro na tela
         * @return int Valor atual de HP
         */
        int getCurrentHp();

        /**
         * @brief Retorna se o monstro está vivo ou morto
         * @details retorna booleano para indicar se o monstro está vivo ou morto
         *
         * @return booleano que retorna vida do monstro
         */
        bool isAlive() const;

        /**
         * @brief Retorna vida atual do monstro
         * @details Retorna frase com estado de HP atual da vida do monstro e HP máximo
         * @return std::string
         */
        std::string currentHealth() const;

        /**
         * @brief Dano causado ao monstro
         * @details Dano causado pelo jogador contra o monstro
         *
         * @param damage Dano causado pelo jogador contra o monstro
         */
        void takeDamage(unsigned int damage);

        /**
         * @brief Dano causado pelo monstro
         * @details Dano causado pelo monstro contra o jogador
         * @return unsigned int dano
         */
        unsigned int monsterDamage();

        /**
         * @brief Imprime valor Máximo de HP
         * @details Função que retorna o valor máximo de HP
         * @return uint HP MAXIMO
         */
        uint getMaximumHp() const;

        // virtual std::string ToString() const;

protected:
        /**
         * @brief Nome do monstro
         *
         */
        std::string _name;

        /**
         * @brief HP atual do monstro
         *
         */
        int _currentHp;

        /**
         * @brief Hp máximo do monstro
         *
         */
        uint _maxHp;

        /**
         * @brief Dano máximo do Monstro
         *
         */
        uint _maxDamage;

        /**
         * @brief Dano mínimo do monstro
         *
         */
        uint _minDamage;
};

#endif