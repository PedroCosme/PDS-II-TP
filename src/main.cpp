#include <iostream>
#include <string>
#include <exception>
#include "playableCharacter.hpp"
#include "weapon.hpp"
#include "great_sword.hpp"
#include "monster.hpp"
int main()
{
    GreatSword g;
    Monster monster("Goblin", 100);
    std::cout << "Bem vindo ao jogo, começaremos criando um personagem" << std::endl;
    std::cout << "Escolha um nome para o seu personagem:" << std::endl;
    std::string playerName;
    std::cin >> playerName;
    std::cout << "Bem-vindo(a) ao nosso simulador de Batalha RPG, " << playerName << "!" << std::endl;
    std::list<Weapon> playerInventory;
    PlayableCharacter player(g, playerInventory, playerName);
    std::cout << player.getName() << " " << player.getLvl() << " " << player.getCurrentHp() << std::endl;
    std::cout << monster.getName() << " "
              << " " << monster.currentHealth() << std::endl;
    player.addItem(g);
    player.showWeapons();

    // batalha
    while (player.isAlive() && monster.isAlive())
    {

        Weapon currentweapon = player.returnWeapon();

        std::cout << "Player: " << player.getName() << " | Monster: " << monster.getName() << std::endl;
        std::cout << "Hp: " << player.getCurrentHp() << " | Hp: " << monster.getCurrentHp() << std::endl;
        int pchoice;
        std::cout << "O que deseja fazer? \n (1) Atacar \n (2) Tomar poção \n (3) Trocar de arma" << std::endl;
        switch (pchoice)
        {
        case 1:
        {
            player.dealDamage(playerdamage);
            break;
        }
        case 2:
        {
            player
        }
        }
    }
    return 0;
}