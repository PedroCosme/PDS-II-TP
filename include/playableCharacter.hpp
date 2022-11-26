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
    PlayableCharacter(std::string name = "", unsigned int lvl = 1, unsigned int xp = 0, unsigned int maxHp = 100, unsigned int currentHp = 100,
                      unsigned int maxMp = 50, unsigned int gold = 1000);
    ~PlayableCharacter();

    std::string getName();

    unsigned int getLvl();

    unsigned int getCurrentHp();

    unsigned int getXp();

    void lvlUp();

    void setXp(int xp);

    bool isAlive();

    bool dealDamage(unsigned int damageAmount);

    void takeDamage(unsigned int damage);

    float hPPercentage();

    void heal(unsigned int healAmount);

    std::string currentHealth();

    std::string toString();

    void hpMultiplier();

    float getHp();

    void showWeapons();

    Weapon returnWeapon();

    void changeWeapon(Weapon weapon);

    void addGold(uint goldAmount);

    void subtractGold(int goldAmount);

    void buyItem(std::string itemName);

    int getGold();

private:
    Weapon _weapon;
    unsigned int _lvl;
    unsigned int _xp;
    std::string _name;
    unsigned int _gold;
    unsigned int _currentHp;
    unsigned int _maxHp;
    unsigned int _maxMp;
    float _hp;
    float _mp;
};
#endif