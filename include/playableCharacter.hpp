#ifndef PLAYABLECHARACTER_H
#define PLAYABLECHARACTER_H

#include <iostream>
#include <string>
#include <set>
#include "equipment.hpp"

/**
 * @brief Classe responsavel pelo personagem do jogador. A classe armazena
 * todos as informações relevantes sobre o PC(Playable Character).
 *
 */

class PlayableCharacter{
    public:
    /**
   * @brief Construtor padrao que inicializa todas as variaveis da classe.
   * @param name Nome do personagem dado pelo jogador
   * @param hp float com o hp base do jogador
   * @param mp float com o mp base do jogador
   * @param lvl int que armazena o nível do jogador
   * @param xp int que armaenza a quantidade de experiência do jogador no nível atual
   * @param equipment objeto do tipo equipamento que indica o equipamento equipado atualmente
   * @param equipments set que armazena objetos do tipo equipamento que descreve o inventário do usuário
   * 
   */
  PlayableCharacter(std::string name, float hp, float mp, int lvl, int xp, Equipment equipment, std::set<Equipment>& equipments);


};
    /**
   * @brief Retorna o hp base do personagem
   * @return float com o hp base do personagem
   */
    float get_hp();

    /**
   * @brief Retorna o mp base do personagem
   * @return float com o mp base do personagem
   */
  float get_mp();

   /**
   * @brief Retorna o level base do personagem
   * @return int com o lvl atual do personagem
   */
  int get_lvl();

   /**
   * @brief Retorna o xp base do personagem
   * @return int com o xp atual do personagem
   */
  int get_xp();

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
   * @brief Atualiza o level do personagem
   * @param lvl lv atual do personagem
   */
  void set_lvl(int lvl);

  /**
   * @brief Atualiza a xp do personagem
   * @param xp xp atual do personagem
   */
  void set_xp(int xp);

  /**
   * @brief Informa ao jogador os equipamentos disponíveis em seu inventário
   * @param equipments set com os equipamentos do usuário
   */
  void print_equipments(std::set<Equipment>& equipments);

  /**
   * @brief Informa ao jogador seu invetário de equipamentos e permite-o alterar seu equipamento atual
   * @param equipments set com os equipamentos do usuário
   */
  void change_equipment(std::set<Equipment>& equipments);

  /**
   * @brief Adiciona um equipamento novo ao inventário do usuário
   * @param equipments set com os equipamentos do usuário
   */
  void add_equipment(std::set<Equipment>& equipments);

   /**
   * @brief Realiza ação de ataque com o equipamento atualmente equipado
   * @param equipment objeto do tipo equipamento atualmente equipado
   */
  void attack(Equipment equipment);

  /**
   * @brief Realiza ação de beber poção de cura caso o usuário tenha alguma. Chama a função heal() de game events.
   * @param equipments set com os equipamentos do usuário
   */
  void drink_potion(std::set<Equipment>& equipments);

  

#endif