#include <iostream>
#include <string>
#include <exception>
#include "playableCharacter.hpp"
#include "weapon.hpp"
#include "monster.hpp"
#include "gameEvents.hpp"
#include <unistd.h>

int main()
{
    Enemy monster(20, 50, "Goblin", 100);
    std::cout << "Bem vindo ao jogo, começaremos criando um personagem" << std::endl;
    std::cout << "Escolha um nome para o seu personagem:" << std::endl;
    std::string playerName;
    std::cin >> playerName;
    std::cout << "Bem-vindo(a) ao nosso simulador de Batalha RPG, " << playerName << "!" << std::endl;
    PlayableCharacter player(playerName);

    char getEnter = 'a';

    while(getEnter != 10){
        std::cout << "Pressione (Enter) para continuar" << std::endl;  
        
        std::cin >> getEnter;
        break;
    }

    std::cout << "For three long days your have adventured in the dark forest, finally you see a tower in the distance and rush towards it" << std::endl;
    sleep(5);
    std::cout << "When you get close enough to the tower you see a bridge guarded by a giant Troll!" << std::endl;
   

    player.changeWeapon(availableWeapons.at(WEAPONS::GREATSWORD));
    //narracao inicial

    // batalha
    GameEvents game;
    game.battle(player, monster);
   // game.hitOrMissMonster();
    //game.hitOrMissPlayer();
    return 0;
}
