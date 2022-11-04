#ifndef HEAL_POTION_H
#define HEAL_POTION_H
#include "equipment.hpp"

/**
 * @brief Subclasse da classe Equipment
 */
class HealPotion: public Equipment{
public:
/**
 * @brief construtor padrão da classe
 */
HealPotion(std::string name, std::string allowed_class, int damage, float drop_rate);
/**
 * @brief cura o personagem.
 */
void heal();


};
#endif
