#ifndef PLAYABLECHARACTER_H
#define PLAYABLECHARACTER_H

#include <iostream>
#include <string>
#include <set>
#include "equipment.hpp"
#include "equipInventory.hpp"
#include "weapon.hpp"

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
    PlayableCharacter(std::string &name, unsigned int lvl, unsigned int xp, unsigned int maxHp, unsigned int gold);
    PlayableCharacter(PlayableCharacter &playableCharacter);
    ~PlayableCharacter();

    /**
     * @brief Retorna o nome do personagem
     * @return string com o nome do personagem;
     */
    std::string getName() const;
    /**
     * @brief Retorna o level base do personagem
     * @return int com o lvl atual do personagem
     */
    unsigned int getLvl();

    /**
     * @brief Retorna o xp base do personagem
     * @return int com o xp atual do personagem
     */
    unsigned int getXp();
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
    void setLvl(int lvl);

    /**
     * @brief Atualiza a xp do personagem
     * @param xp  int xp atual do personagem
     */
    void setXp(int xp);

    /**
     * @brief Informa se o personagem está vivo
     */
    bool isAlive() const;

    bool dealDamage(unsigned int damageAmount);

    bool takeDamage(unsigned int damage) noexcept;

    float hPPercentage() const;

    void heal(unsigned int healAmount);

    std::string currentHealth() const;

    virtual std::string toString() const;

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

protected:
    Weapon _weapon;
    unsigned int _lvl;
    unsigned int _xp;
    EquipInventory _equipInventory;
    std::string _name;
    unsigned int _gold;
    unsigned int _currentHp;
    unsigned int _xp;
    unsigned int _maxHp;
    // Equipment _equipment;
    // std::set<Equipment> _equipments;
};

#endif;