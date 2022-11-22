#include <iostream>
#include <string>
#include "game_events.hpp"
#include <exception>
#include "playableCharacter.hpp"
#include "weapon.hpp"
#include "great_sword.hpp"
#include "monster.hpp"
int main()
{
    GreatSword g;
    Monster monster("monster", 100);
    std::cout << "Bem vindo ao jogo, começaremos criando um personagem" << std::endl;
    std::cout << "Escolha um nome para o seu personagem:" << std::endl;
    std::string playerName;
    std::cin >> playerName;
    std::cout << "Bem-vindo(a) ao nosso simulador de Batalha RPG, " << playerName << "!" << std::endl;
    std::list<Weapon> playerInventory;
    PlayableCharacter player(g, playerInventory, playerName);
    std::cout << player.getName() << " " << player.getLvl() << " " << player.getCurrentHp() << std::endl;
    std::cout << monster.getName() << " "  << " " << monster.currentHealth() << std::endl;
    player.addItem(g);
    player.showWeapons();

    return 0;
}