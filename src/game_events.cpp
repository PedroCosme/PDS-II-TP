#include "game_events.hpp"

void Game_events::heal(){
  
  if(get_hp()<(hp_inicial*0.25)){
  set_hp(hp_inicial*0.25);
  }
}

int Game_events::roll_dice(){
  if(game_end())=false){
    int outcome;
    int min=1;
    int max=6;
    roll= rand()%(max-min+1)+min;
    return outcome;
}
  
bool Game_events::game_end(){
  if(get_hp()==0.0){
    game_on=false;
}
  
  else{
    game_on=true;
  }
  return(!game_on);
}
   
