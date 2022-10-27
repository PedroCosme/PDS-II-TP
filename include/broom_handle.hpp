#ifndef BROOM_HANDLE_H
#define BROOM_HANDLE_H
#include "equipment.hpp"

/**
 * @brief Subclasse da classe Equipment
 */
class BroomHandle: public Equipment{
public:
  /**
 * @brief Construtor padrão para a classe.
 */
  BroomHandle(std::string name, std::string allowed_class, int damage, float drop_rate);



};
#endif
