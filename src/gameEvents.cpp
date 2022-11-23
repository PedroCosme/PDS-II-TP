#include "gameEvents.hpp"

GameEvents::GameEvents(){

};
GameEvents::~GameEvents(){

};
void GameEvents::battle(PlayableCharacter player, Monster monster)
    {
        while(player.isAlive() && monster.isAlive()){
            std::cout 
            << player.getName() << " vs " << monster.getName() << "\n" 
            <<"HP: " << player.currentHealth() << " HP:" << monster.getCurrentHp() << "\n"
            << "Choose: (a) attack \n";
            char playerChoice = '0';
            while(playerChoice != 'a')
            {
                playerChoice = getchar();
            }
            monster.takeDamage(player.returnWeapon().damageRange());

            if (monster.isAlive()) 
            {
                player.takeDamage(monster.monsterDamage(20));
            }
        }
    if (player.isAlive()) 
    {
        std::cout << "You defeated the " << monster.getName() << "!\n";
    //IMPLEMENTAR AQUI COMO GANHAR OURO E EXPERIENCIA ATRAVES DE DERROTA DE MONSTROS
    } else {
        std::cout << "You were defeated by the "<< monster.getName() << "!\n";
    } 
        
}

unsigned int GameEvents::calcDamage(unsigned int damageRange){

}
unsigned int GameEvents::hitormiss(){
    
    unsigned int chance = rand() % 100;
    if(chance < 24){
        std::cout << "The enemy swang his weapon at you but missed for an inch!" << std::endl;
    }
    else if(chance > 90){
         std::cout << "The enemy's attack was so strong you slipped and fell on your arse" << std::endl;
    }
    return chance;
}
