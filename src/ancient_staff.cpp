#include "ancient_staff.hpp"

AncientStaff::AncientStaff(std::string name, std::string allowed_class, int damage, float drop_rate){
  
  this->name=name;
  this->allowed_class=allowed_class;
  this->damage=damage;
  this->drop_rate=drop_rate;
  
}
