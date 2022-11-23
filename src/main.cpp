#include <iostream>
#include <string>
#include <exception>
#include "playableCharacter.hpp"
#include "weapon.hpp"
#include "monster.hpp"

 void startbattle(PlayableCharacter player, Monster monster)
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


int main()
{
    Monster monster("Goblin", 100);
    std::cout << "Bem vindo ao jogo, começaremos criando um personagem" << std::endl;
    std::cout << "Escolha um nome para o seu personagem:" << std::endl;
    std::string playerName;
    std::cin >> playerName;
    std::cout << "Bem-vindo(a) ao nosso simulador de Batalha RPG, " << playerName << "!" << std::endl;
    PlayableCharacter player(playerName);
    // std::cout << player.getName() << " " << player.getLvl() << " " << player.getCurrentHp() << std::endl;
    // std::cout << monster.getName() << " "
    //           << " " << monster.currentHealth() << std::endl;
    // std::cout << player.returnWeapon().getName();
    player.changeWeapon(availableWeapons.at(WEAPONS::GREATSWORD));
    //std::cout << player.returnWeapon().getName() << std::endl;

    // batalha

    startbattle(player, monster);
    
    return 0;
}
   