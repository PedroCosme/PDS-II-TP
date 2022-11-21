#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>
#include "game_events.hpp"
/**
 * @brief Classe responsavel pelo personagem monster. A classe armazena
 * todos as informações relevantes sobre o Monster.
 *
 */

class Monster : public Game_events
{
public:
        /**
         * @brief Construtor padrao que inicializa todas as variaveis da classe.         *
         */
        Monster();
        /**


        * @brief Informa ao jogador seu invetÃ¡rio de equipamentos e permite-o soltar seu equipamento atual
        */
        // virtual void drop_itens() const = 0;
        /**
         * @brief  Define dano do ataque do monster
         */
        // virtual void attack() const = 0;

        /**
         * @brief Retorna a quantidade de dano tomado pelo monster
         * @return float com o atual hp do personagem
         */
};
#endif
