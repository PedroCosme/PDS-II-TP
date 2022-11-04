#include "game_events.hpp"

void Game_events::heal(){
  
  if(get_hp()<(hp_inicial*0.25)){
  set_hp(hp_inicial*0.25);
  }
}
void Game_events::game_end(){
  
}
