#include <iostream>
#include <string>
#include <set>
#include <equipment.hpp>

Equipment::Equipment(std::string name = "", std::string allowed_class= "", int damage = 0, float drop_rate =0.0){
    this->_name = name;
    this->_allowed_class = allowed_class;
    this->_damage = damage;
    this->_drop_rate = drop_rate;
};