/**
 * @file playableCharacter.hpp
 * @author Victória Tejada (victoriatsiqueiram@gmail.com)
 * @brief Classe principal com a lógica de playableCharacter
 * @version 1.0
 * @date 2022-12-03
 * @details Responsável por armazenar e processar todas as informações relevantes sobre o usuário jogador. Define atributos do usuário durante o jogo.
 * @copyright Copyright (c) 2022
 *
 */

#ifndef PLAYABLECHARACTER_H
#define PLAYABLECHARACTER_H

#include <iostream>
#include <string>
#include <list>
#include "weapon.hpp"
#include "utilities.hpp"

/**
 * @brief Classe responsavel pelo personagem do jogador. A classe armazena
 * todos as informações relevantes sobre o PC(Playable Character).
 *
 */
class PlayableCharacter
{
public:
    /**
     * @brief Construtor do objeto playableCharacter
     * @details Construtor que inicializa toda estrutura do Usuário Jogador (PC)
     *
     * @param name Nome do jogador
     * @param lvl Nível do jogador
     * @param xp XP dojogador
     * @param maxHp Valor máximo de HP do jogador
     * @param currentHp Valor atual de HP do jogador
     * @param maxMp Valor máximo de MP do jogador
     * @param gold Valor de ouro do jogador
     */
    PlayableCharacter(std::string name = "", unsigned int lvl = 1, unsigned int xp = 0, unsigned int maxHp = 100, int currentHp = 100,
                      unsigned int maxMp = 50, unsigned int gold = 100);

    /**
     * @brief Destrói o objeto Playable Character
     *
     */
    ~PlayableCharacter();

    /**
     * @brief Retorna o nome do jogador
     * @details Retorna o nome do jogador ao usar essa função
     *
     * @return std::string
     */
    std::string getName();

    /**
     * @brief Retorna o valor do nível do jogador
     * @details Retorna o valor do nível do jogador ao usar essa função
     * @return unsigned int    Nível do jogador
     */
    unsigned int getLvl();

    /**
     * @brief Retorna valor atual de HP do jogador
     * @details Retorna o valor atual de HP ao usar essa função
     * @return unsigned int Hp atual
     */
    unsigned int getCurrentHp();

    /**
     * @brief Retorna o valor da XP do jogador
     * @details Retorna o valor da XP do jogador ao usar essa função
     * @return unsigned int Valor da xp
     */
    unsigned int getXp();

    /**
     * @brief Sobe um nível do jogador
     * @details O jogador passa sobe um nível
     */
    void lvlUp();

    /**
     * @brief Define o valor de XP do jogador
     * @details Adiciona o valor de XP ao matar um monstro
     * @param xp Experiencia do jogador
     */
    void setXp(int xp);

    /**
     * @brief Retorna se o jogador está vivo ou morto
     *
     * @details retorna booleano para indicar se o monstro está vivo ou morto
     *
     * @return boolean
     */
    bool isAlive();

    /**
     * @brief Causa dano ao jogador
     * @details retorna o dano causado ao jogador pelo monstro

     * @param damage dano causado
     */
    void takeDamage(unsigned int damage);

    /**
     * @brief Porcentagem de HP do jogador
     * @details Retorna a quantidade de HP do jogador em porcentagem
     *
     * @return float
     */
    float hPPercentage();

    /**
     * @brief Cura o jogador
     * @details Função para cura de jogador ao longo do jogo
     * @param healAmount quantidade de HP ao ser recuperado
     */
    void heal(unsigned int healAmount);

    /**
     * @brief Estado de saúde atual do jogador
     * @details Mostra estado de saúde atual do jogador
     * @return std::string com HP atual / HP máximo
     */
    std::string currentHealth();

    /**
     * @brief Retorna a arma equipada pelo jogador
     *
     * @return Objeto do tipo Weapon
     */
    Weapon returnWeapon();

    /**
     * @brief Trocar a arma do personagem
     * @details Função para trocar de arma
     * @param weapon objeto do tipo weapon
     */
    void changeWeapon(Weapon weapon);

    /**
     * @brief Adicionar ouro ao jogador
     * @details Adicionar ouro para o jogador
     * @param goldAmount Quantidade de ouro a ser adicionada
     */
    void addGold(uint goldAmount);

    /**
     * @brief Diminuir ouro do jogador
     * @details Função para subtrair ouro do jogador
     * @param goldAmount Quantidade de ouro do jogador
     */
    void subtractGold(int goldAmount);

    /**
     * @brief Adiciona ouro para o jogador
     * @details Serve para adicionar ouro para o jogador
     * @return int
     */
    int getGold();

private:
    /**
     * @brief Arma do jogador
     *
     */
    Weapon _weapon;

    /**
     * @brief Nível do jogador
     *
     */
    unsigned int _lvl;

    /**
     * @brief Experiencia (XP) do jogador
     *
     */
    unsigned int _xp;

    /**
     * @brief Nome do jogador
     *
     */
    std::string _name;

    /**
     * @brief Ouro do jogador
     *
     */
    unsigned int _gold;

    /**
     * @brief Quantidade de HP atual do jogador
     *
     */
    int _currentHp;

    /**
     * @brief Quantidade máxima de HP
     *
     */
    unsigned int _maxHp;

    /**
     * @brief Quantidade máxima de MP
     *
     */
    unsigned int _maxMp;

    /**
     * @brief Quantidade de HP
     *
     */
    float _hp;

    /**
     * @brief Quantidade de MP
     *
     */
    float _mp;
};
#endif
