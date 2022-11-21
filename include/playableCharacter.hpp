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
class PlayableCharacter
{
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
    // PlayableCharacter(std::string name = "", float hp = 100, float mp = 50, int lvl = 1, int xp = 0, Equipment equipment =, std::set<Equipment> &equipments);
    PlayableCharacter(std::string name = "", int lvl = 1, int xp = 0);

    /**
     * @brief Retorna o nome do personagem
     * @return string com o nome do personagem;
     */
    std::string get_name();
    /**
     * @brief Retorna o hp base do personagem
     * @return float com o hp base do personagem
     */
    // virtual float get_hp() const = 0;

    // /**
    //  * @brief Retorna o mp base do personagem
    //  * @return float com o mp base do personagem
    //  */
    // virtual float get_mp() const = 0;

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
    // virtual void set_hp(float hp) const = 0;

    // /**
    //  * @brief Atualiza o mp base do personagem
    //  * @param mp mp do personagem
    //  */
    // virtual void set_mp(float mp) const = 0;

    /**
     * @brief Atualiza o level do personagem
     * @param lvl lv atual do personagem
     */
    void set_lvl(int lvl);

    /**
     * @brief Atualiza a xp do personagem
     * @param xp  int xp atual do personagem
     */
    void set_xp(int xp);

    /**
     * @brief Informa se o personagem está vivo
     */
    bool is_alive();

    /**
     * @brief Retorna o equipamento atual do personagem
     * @return equipment com equipamento atual do personagem
     */
    // Equipment get_equipment();

    // /**
    //  * @brief Altera o equipamento atual do personagem
    //  * @param equip equipamento a ser equipado
    //  */
    // void set_equipment(Equipment equipment);

    // /**
    //  * @brief Informa ao jogador os equipamentos disponíveis em seu inventário
    //  * @param equipments set com os equipamentos do usuário
    //  */
    // void print_equipments(std::set<Equipment> &equipments);

    // /**
    //  * @brief Informa ao jogador seu invetário de equipamentos e permite-o alterar seu equipamento atual
    //  * @param equipments set com os equipamentos do usuário
    //  */
    // void change_equipment(std::set<Equipment> &equipments);

    // /**
    //  * @brief Adiciona um equipamento novo ao inventário do usuário
    //  * @param equipments set com os equipamentos do usuário
    //  */
    // void add_equipment(Equipment equipment);

    // /**
    //  * @brief Realiza ação de ataque com o equipamento atualmente equipado
    //  * @param equipment objeto do tipo equipamento atualmente equipado
    //  */
    // void attack(Equipment equipment);

    // /**
    //  * @brief Realiza ação de beber poção de cura caso o usuário tenha alguma. Chama a função heal() de game events.
    //  * @param equipments set com os equipamentos do usuário
    //  */
    // void drink_potion(std::set<Equipment> &equipments);

private:
    std::string _name;
    int _lvl;
    int _xp;
    // Equipment _equipment;
    // std::set<Equipment> _equipments;
};

#endif