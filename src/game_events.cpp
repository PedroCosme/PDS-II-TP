#include <iostream>
#include <string>
#include "game_events.hpp"
#include "mage.cpp"
#include "warrior.cpp"

void game_start()
{
  std::cout << "Bem vindo ao jogo, começaremos criando um personagem" << std::endl;
  int choosen_class;
  std::cout << "Primeiramente, escolha uma classe para o seu personagem. Digite 1 para jogar como mago e 2 como guerreiro" << std::endl;
  std::cin >> choosen_class;
  while (1)
  {
    if (choosen_class == 1)
    {
      break;
    }
    else if (choosen_class == 2)
    {
      break;
    }
    else
    {
    }
  }
}
// void Game_events::heal(){

//   if(get_hp()<(hp_inicial*0.25)){
//   set_hp(hp_inicial*0.25);
//   }
// }
// void Game_events::roll_dice(){
//   while(game_end()!=0){
// //aqui deve constar a função que mantém o jogo funcionando, por meio da geração de números aleatórios.//

//     if(game_end()==0) std::cout<<"Game End"<<endl;
//      else if(game_end()==0)  break;
// }
// bool Game_events::game_end(){
//   if(get_hp()==0.0){
//     game_on=false;
// }
//   else{
//     game_on=true;
//   }
//   return(!game_on);
// }
