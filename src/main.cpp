#include <iostream>
#include <string>
#include <exception>
#include "playableCharacter.hpp"
#include "weapon.hpp"
#include "monster.hpp"
#include "gameEvents.hpp"
#include <unistd.h>
#include "shop.hpp"
#include "item.hpp"
#include "weapon.hpp"

int main()
{
    Shop shop;
    Item healthPotion("Health Potion", 50);
    Item grenade("Grenade", 80);
    Item greatSword("Great Sword", 180);
    Item battleAxe("Battle Axe", 220);
    Item dagger("Dagger", 50);
    Item longSword("Long sword", 120);

    std::cout << healthPotion.getName() << std::endl;
    Enemy monster(20, 50, "Goblin", 100);
    std::cout << "Choose a name for your character:" << std::endl;
    std::string playerName;
    std::cin >> playerName;
    std::cout << " Welcome to our RPG Battle Simulator " << playerName << "!" << std::endl;
    PlayableCharacter player(playerName);
    std::cout << "Press (Enter) to continue" << std::endl;
    system("read");
    //narracao inicial
    std::cout << "For three long days your have adventured in the Dark Woods, searching for the hidden treasure. "
    << "Finally, you see a tower in the distance and praise your gods, as the supplies were barely enough for another day in the Dark Woods." << std::endl
    << "When you approach the tower you listen to a weird giggle that makes you shiver and fear for the worst!" << std::endl
    << "Suddenly, a Goblin rushes towards you and attacks you!";
    player.changeWeapon(availableWeapons.at(WEAPONS::GREATSWORD));

    // batalha
    GameEvents game;
    game.battle(player, monster);
    // game.hitOrMissMonster();
    // game.hitOrMissPlayer();
    return 0;
}
