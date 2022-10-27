#ifndef ANCIENT_STAFF_H
#define ANCIENT_STAFF_H
#include "equipment.hpp"

/**
 * @brief Subclasse da classe Equipment
 */

class AncientStaff: public Equipment{
  
  /**
 * @brief construtor padrão da classe
 */
  public:
  AncientStaff(std::string name, std::string allowed_class, int damage, float drop_rate);
  
};
#endif
