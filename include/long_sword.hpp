#ifndef LONG_SWORD_H
#define LONG_SWORD_H
#include "equipment.hpp"

/**
 * @brief Subclasse da classe Equipment
 */
class LongSword: public Equipment{
public:
/**
 * @brief Construtor padrão da classe
 */
LongSword(std::string name, std::string allowed_class, int damage, float drop_rate);

};
#endif
