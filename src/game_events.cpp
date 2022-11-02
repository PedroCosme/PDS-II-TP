#include "game_events.hpp"

void Game_events::heal(){
  float novo_hp;
  novo_hp=get_hp()*0.25;
  set_hp(novo_hp);
}
void Game_events::game_end(){
  
}
