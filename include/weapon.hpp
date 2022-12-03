/**
 * @file weapon.hpp
 * @author Victória Tejada (victoriatsiqueiram@gmail.com)
 * @brief Classe principal responsavel pela lógica de weapon
 * @version 1.0
 * @date 2022-12-03
 * @details Responsável por armazenar e processar todas as informações relevantes sobre weapon. Todas as armas do usuário estão armazenadas nessa classe.
 * @copyright Copyright (c) 2022
 * 
 */


#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_

#include <string>
#include <map>
#include <iostream>
#include <iterator>
#include "utilities.hpp"

enum class WEAPONS
{
    UNARMED,
    GREATSWORD,
    LONGSWORD,
    DAGGER,
    BATTLEAXE
};
class Weapon
{

public:
    Weapon(std::string name, unsigned int minDamage, unsigned int maxDamage);

    WEAPONS getFromName(std::string weaponName);
    std::string getName();
    unsigned int damageRange();
    unsigned int getDamage();

private:
    std::string _name;
    unsigned int _minimumDamage;
    unsigned int _maximumDamage;
};

extern std::map<WEAPONS, Weapon> availableWeapons;

#endif
