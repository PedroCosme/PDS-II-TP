#include <iostream>
#include <string>
#include <exception>
#include "playableCharacter.hpp"
#include "weapon.hpp"
#include "monster.hpp"
#include "gameEvents.hpp"


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
    GameEvents game;

    game.battle(player, monster);
    
    return 0;
}
   