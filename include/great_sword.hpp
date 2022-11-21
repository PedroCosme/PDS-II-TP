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
    GreatSword(std::string name, unsigned int minDamage, unsigned int maxDamage, float dropRate);
    GreatSword();

    unsigned int damageRange();
    unsigned int getDamage(int damage);
    std::string getName() const override;

private:
    unsigned int _minDamage;
    unsigned int _maxDamage;
    float _droprate;
};
#endif

