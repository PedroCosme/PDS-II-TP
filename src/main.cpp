#include <iostream>
#include <string>
#include <exception>
#include "playableCharacter.hpp"
#include "weapon.hpp"
#include "monster.hpp"
#include "gameEvents.hpp"

int main()
{
    Enemy monster(20, 50, "Goblin", 100);
    std::cout << "Bem vindo ao jogo, começaremos criando um personagem" << std::endl;
    std::cout << "Escolha um nome para o seu personagem:" << std::endl;
    std::string playerName;
    std::cin >> playerName;
    std::cout << "Bem-vindo(a) ao nosso simulador de Batalha RPG, " << playerName << "!" << std::endl;
    PlayableCharacter player(playerName);

    player.changeWeapon(availableWeapons.at(WEAPONS::GREATSWORD));

    // batalha
    GameEvents game;

    // game.battle(player, monster);
    game.hitOrMissMonster();
    game.hitOrMissPlayer();
    return 0;
}
