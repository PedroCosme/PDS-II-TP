#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>
#include "game_events.hpp"
/**
 * @brief Classe responsavel pelo personagem monster. A classe armazena
 * todos as informaÃ§Ãµes relevantes sobre o Monster.
 *
 */

class Monster: public Game_events{
    public:
/**
* @brief Construtor padrao que inicializa todas as variaveis da classe.
* @param hp float com o hp base do jogador
* @param difficulty int que determina um multiplicador de dificuldade do monster
* 
*/
    Monster(float hp, float mp, int difficulty);
/**
* @brief Destrutor padrao.
*/
/**


* @brief Retorna o hp base do personagem
* @return float com o hp base do personagem
*/
        float get_hp();
/**
* @brief Retorna o mp base do personagem
* @return int com o mp base do personagem
*/
        float get_mp();
/**
* @brief Atualiza o hp base do personagem
* @param hp hp do personagem
*/
        void set_hp(float hp);
/**
* @brief Atualiza o mp base do personagem
* @param mp mp do personagem
*/
        void set_mp(float mp);
/**
* @brief Informa ao jogador seu invetÃ¡rio de equipamentos e permite-o soltar seu equipamento atual
*/     
        void drop_itens();
/**
* @brief  Define dano do ataque do monster
*/
        void attack();
/**
* @brief Multiplica o hp base do personagem
* @return float com o hp base do personagem
*/
        float hp_multiplier();
/**
* @brief Retorna a quantidade de dano tomado pelo monster
* @return float com o atual hp do personagem
*/     
        void take_damage();

    private:
       
        float _hp();
       
        int _difficulty();
};
#endif
