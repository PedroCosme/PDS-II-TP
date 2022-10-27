#ifndef GREAT_SWORD_H
#define GREAT_SWORD_H
#include "equipment.hpp"

/**
 * @brief Subclasse da classe Equipment
 */
class GreatSword: public Equipment{
public:
/**
 * @brief Construtor padrão da classe
 */
GreatSword(std::string name, std::string allowed_class, int damage, float drop_rate);
}
#endif
