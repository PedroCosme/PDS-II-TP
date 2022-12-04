#include "gameEvents.hpp"

GameEvents::GameEvents(){};
GameEvents::~GameEvents(){};

void GameEvents::battle(PlayableCharacter player, Enemy monster, Inventory inventory)
{
    while (monster.isAlive())
    {
        std::cout
            << player.PlayableCharacter::getName() << " vs " << monster.Monster::getName() << "\n"
            << "HP: " << player.currentHealth() << " HP:" << monster.getCurrentHp() << "\n"
            << "Inventory: ";
        inventory.displayInventory();
        std::cout << player.returnWeapon().getName() << std::endl;

        std::cout << "Choose: (a) attack \n";
        char playerChoice = '0';
        while (playerChoice != 'a')
        {
            playerChoice = getchar();
        }
        int hitOrMiss = GameEvents::hitOrMissPlayer(); // // hit or miss do monstro, implementar o miss
        if (hitOrMiss > 124 && hitOrMiss < 190)
        {
            uint damageDealt = player.returnWeapon().getDamage();
            monster.Monster::takeDamage(damageDealt);
            std::cout << "The monster has taken " << damageDealt << " damage!" << std::endl;
            monster.Monster::isAlive();
        }
        else if (hitOrMiss >= 90)
        {
            uint damageDealt = player.returnWeapon().getDamage() * 2;
            monster.Monster::takeDamage(damageDealt);
            std::cout << "The monster has taken " << damageDealt << " damage!" << std::endl;
            monster.Monster::isAlive();
        }

        else if (hitOrMiss < 124)
        {
            monster.Monster::takeDamage(0);
        }

        if (monster.isAlive())

        {
            int hitOrMissM = GameEvents::hitOrMissMonster(); // hit or miss do monstro, implementar o miss

            player.takeDamage(monster.monsterDamage(1)); // discutir com o Bruno como vamos calcular o dano do monstro
            player.PlayableCharacter::isAlive();
        }
        else
        {
            std::cout << "You defeated the " << monster.getName() << " and found " << monster.goldWorth() << " in it's corpse !\n"; // retorna quanto de ouro o monstro vale
            player.addGold(monster.goldWorth());
            std::cout << monster.xpWorth() << " xp gained" << std::endl;
            player.setXp(monster.xpWorth());
            std::cout << player.getXp() << std::endl;
            monster.~Enemy();
        }
    }
}

unsigned int GameEvents::calcDamage(unsigned int damageRange)
{
}
int GameEvents::hitOrMissMonster()
{
    srand(time(0));

    int chanceMonster = genNum(1, 100);

    if (chanceMonster < 24)
    {
        std::cout << "The enemy swang his weapon at you but missed for an inch!" << std::endl;
    }
    else if (chanceMonster >= 90)
    {
        std::cout << "The enemy's attack was so strong you slipped and fell on your arse" << std::endl;
    }

    return chanceMonster;
}
int GameEvents::hitOrMissPlayer()
{
    srand(time(0));
    int chancePlayer = genNum(100, 200);

    if (chancePlayer < 124)
    {
        std::cout << "You swing your weapon at the terrible monster but missed by an inch!" << std::endl;
    }
    else if (chancePlayer >= 190)
    {
        std::cout << "Your attack was so strong you completely smashed the monster's leg" << std::endl;
    }

    return chancePlayer;
}
