
#ifndef _BANDIT_H
#define _BANDIT_H

#include "Monster.hpp"


class Bandit: public Monster {
public: 
    
    float get_hp();
    
    void set_hp();
    
    Equipment drop_items();
    
    void attack();
    
    float hp_multiplier();
    
    float take_damage();
    
    void steal_item();
    
    float hp_multiplier();
    
    float take_damage();



private:
       
    float _hp();
                    
    int _difficulty();
    
 };

#endif 
