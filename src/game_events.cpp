#include <iostream>
#include <string>
#include "game_events.hpp"
#include "mage.cpp"
#include "warrior.cpp"

void game_start()
{
  std::cout << "Bem vindo ao jogo, começaremos criando um personagem" << std::endl;
  std::cout << "Escolha um nome para o seu personagem:" << std::endl;
  std::string playerName;
  std::cin >> playerName;
  std::cout << "Bem-vindo(a) ao nosso simulador de Batalha RPG, " << playerName << "!" << std::endl;
  int choosen_class;
  std::cout << "Agora, escolha uma classe para o seu personagem. Digite 1 para jogar como mago e 2 como guerreiro" << std::endl;
  std::cin >> choosen_class;
  while (1)
  {
    if (choosen_class == 1)
    {
      Mage *mage = new Mage(playerName);
      break;
    }
    else if (choosen_class == 2)
    {
      // Warrior::Warrior()
      break;
    }
    else
    {
      std::cout << "Escolha inválida. Você deseja jogar como mago (1) ou como guerreiro (2)?" << std::endl;
    }
  }
}
void game_end()
{
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
