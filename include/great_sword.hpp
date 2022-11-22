#ifndef GREAT_SWORD_H
#define GREAT_SWORD_H
#include "weapon.hpp"

/**
 * @brief Subclasse da classe Weapon
 */
class GreatSword : public Weapon
{
public:
    /**
     * @brief Construtor padrão da classe
     */
    GreatSword(std::string name = "Great Sword", unsigned int minDamage = 4, unsigned int maxDamage = 16, float dropRate = 0.2);
    // ~GreatSword();
    unsigned int damageRange();
    unsigned int getDamage(int damage);
    // std::string getWeaponName();

private:
    unsigned int _minDamage;
    unsigned int _maxDamage;
    float _droprate;
};
#endif
