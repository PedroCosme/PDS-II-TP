#include "gameEvents.hpp"

Item h("Health Potion", 50, 1);
Item g("Grenade", 80, 2);

GameEvents::GameEvents(){};
GameEvents::~GameEvents(){};

void GameEvents::battle(PlayableCharacter *player, Enemy *monster, Inventory *inventory)
{
    Table battleFeed;
    battleFeed.add_row({player->getName(), monster->getName()});
    battleFeed.add_row({player->currentHealth(), monster->currentHealth()});
    battleFeed.add_row({player->returnWeapon().getName()});

    while (monster->isAlive())
    {
        if (player->isAlive())
        {
            std::cout << battleFeed << "\n";
            // std::cout
            //     << player->PlayableCharacter::getName() << " vs " << monster->Monster::getName() << "\n"
            //     << "HP: " << player->currentHealth() << " HP:" << monster->currentHealth() << "\n"
            std::cout << "Inventory:  "
                      << "\n";
            inventory->displayInventory();
            // std::cout << player->returnWeapon().getName() << std::endl;

            std::cout << "Choose: \n (a) attack \n (h) heal \n (t) throw grenade\n";
            char playerChoice = '0';

            std::cin >> playerChoice;
            if (playerChoice == 'a')
            {
                int hitOrMiss = GameEvents::hitOrMissPlayer(); // // hit or miss do monstro, implementar o miss
                if (hitOrMiss > 124 && hitOrMiss < 190)
                {
                    uint damageDealt = player->returnWeapon().getDamage();
                    monster->Monster::takeDamage(damageDealt);
                    std::cout << "The monster has taken " << damageDealt << " damage!" << std::endl;
                    monster->Monster::isAlive();
                }
                else if (hitOrMiss >= 190)
                {
                    uint damageDealt = player->returnWeapon().getDamage() * 2;
                    monster->Monster::takeDamage(damageDealt);
                    std::cout << "The monster has taken " << damageDealt << " damage!" << std::endl;
                    monster->Monster::isAlive();
                }

                else if (hitOrMiss < 124)
                {
                    monster->Monster::takeDamage(0);
                }

                if (monster->isAlive())

                {
                    int hitOrMissM = GameEvents::hitOrMissMonster(); // hit or miss do monstro, implementar o miss
                    int mDamage = monster->monsterDamage();
                    player->takeDamage(mDamage); // discutir com o Bruno como vamos calcular o dano do monstro
                    std::cout << "The monster has dealt " << mDamage << " damage!" << std::endl;
                    player->PlayableCharacter::isAlive();
                }
                else
                {
                    std::cout << "You defeated the " << monster->getName() << " and found " << monster->goldWorth() << " gold coins in it's corpse !\n"; // retorna quanto de ouro o monstro vale
                    player->addGold(monster->goldWorth());
                    std::cout << monster->xpWorth() << " xp gained" << std::endl;
                    player->setXp(monster->xpWorth());
                    monster->~Enemy();
                }
            }

            else if (playerChoice == 'h')
            {

                inventory->subtractItem(h);
                inventory->displayInventory();
                if (inventory->checkValue(h) > 0)
                {
                    player->heal(22);
                }
                if (monster->isAlive())

                {
                    int hitOrMissM = GameEvents::hitOrMissMonster(); // hit or miss do monstro, implementar o miss
                    int mDamage = monster->monsterDamage();
                    player->takeDamage(mDamage); // discutir com o Bruno como vamos calcular o dano do monstro
                    std::cout << "The monster has dealt " << mDamage << " damage!" << std::endl;
                    player->PlayableCharacter::isAlive();
                }
                else
                {
                    std::cout << "You defeated the " << monster->getName() << " and found " << monster->goldWorth() << " gold coins in it's corpse !\n"; // retorna quanto de ouro o monstro vale
                    player->addGold(monster->goldWorth());
                    std::cout << monster->xpWorth() << " xp gained" << std::endl;
                    player->setXp(monster->xpWorth());
                    monster->~Enemy();
                }
            }

            else if (playerChoice == 't')
            {

                inventory->subtractItem(g);
                inventory->displayInventory();
                if (inventory->checkValue(g) > 0)
                {
                    monster->takeDamage(monster->getMaximumHp() * 0.3);
                }
                if (monster->isAlive())

                {
                    int hitOrMissM = GameEvents::hitOrMissMonster(); // hit or miss do monstro, implementar o miss
                    int mDamage = monster->monsterDamage();
                    player->takeDamage(mDamage); // discutir com o Bruno como vamos calcular o dano do monstro
                    std::cout << "The monster has dealt " << mDamage << " damage!" << std::endl;
                    player->PlayableCharacter::isAlive();
                }
                else
                {
                    std::cout << "You defeated the " << monster->getName() << " and found " << monster->goldWorth() << " gold coins in it's corpse !\n"; // retorna quanto de ouro o monstro vale
                    player->addGold(monster->goldWorth());
                    std::cout << monster->xpWorth() << " xp gained" << std::endl;
                    player->setXp(monster->xpWorth());
                    monster->~Enemy();
                }
            }
        }
        else
        {
            std::cout << "You have been defeated by the " << monster->getName() << std::endl;
            std::cout << "Better luck next time!" << std::endl;
            abort();
        }
    }
}

void GameEvents::finalBattle(PlayableCharacter *player, Vampire *monster, Inventory *inventory)
{
    while (monster->isAlive())
    {
        if (player->isAlive())
        {
            std::cout << player->returnWeapon().getName() << "\n";
            std::cout
                << player->PlayableCharacter::getName() << " vs " << monster->Monster::getName() << "\n"
                << "HP: " << player->currentHealth() << " HP:" << monster->currentHealth() << "\n"
                << "Inventory:  ";
            inventory->displayInventory();
            std::cout << "Choose: \n (a) attack \n (h) heal \n (t) throw grenade\n";
            char playerChoice = '0';

            std::cin >> playerChoice;
            if (playerChoice == 'a')
            {
                int hitOrMiss = GameEvents::hitOrMissPlayer(); // // hit or miss do player
                if (hitOrMiss > 124 && hitOrMiss < 190)
                {
                    uint damageDealt = player->returnWeapon().getDamage();
                    monster->Monster::takeDamage(damageDealt);
                    std::cout << "The monster has taken " << damageDealt << " damage!" << std::endl;
                    monster->Monster::isAlive();
                }
                else if (hitOrMiss >= 190)
                {
                    uint damageDealt = player->returnWeapon().getDamage() * 2;
                    monster->Monster::takeDamage(damageDealt);
                    std::cout << "The monster has taken " << damageDealt << " damage!" << std::endl;
                    monster->Monster::isAlive();
                }

                else if (hitOrMiss < 124)
                {
                    monster->Monster::takeDamage(0);
                }

                if (monster->isAlive())

                {
                    int hitOrMissM = GameEvents::hitOrMissMonster(); // hit or miss do monstro
                    if (hitOrMissM > 24 && hitOrMissM < 90)
                    {
                        int damage = monster->monsterDamage();
                        player->takeDamage(damage);
                        std::cout << "The monster has dealt " << damage << " damage!" << std::endl;
                        player->PlayableCharacter::isAlive();
                    }
                    else if (hitOrMissM >= 90)
                    {
                        int damage = monster->monsterDamage();
                        player->takeDamage(damage * 2);
                        std::cout << "The monster has dealt " << damage << " damage!" << std::endl;
                        player->PlayableCharacter::isAlive();
                    }
                    else if (hitOrMissM < 24)
                    {
                        player->takeDamage(0);
                    }
                }
                else
                {
                    std::cout << "You defeated the vampire master" << std::endl;
                }
            }

            else if (playerChoice == 'h')
            {

                inventory->subtractItem(h);
                inventory->displayInventory();
                if (inventory->checkValue(h) > 0)
                {
                    player->heal(22);
                }
                if (monster->isAlive())

                {
                    int hitOrMissM = GameEvents::hitOrMissMonster(); // hit or miss do monstro, implementar o miss
                    int mDamage = monster->monsterDamage();
                    player->takeDamage(mDamage); // discutir com o Bruno como vamos calcular o dano do monstro
                    std::cout << "The monster has dealt " << mDamage << " damage!" << std::endl;
                    player->PlayableCharacter::isAlive();
                }
                else
                {
                    std::cout << "You defeated the vampire master" << std::endl;
                }
            }

            else if (playerChoice == 't')
            {

                inventory->subtractItem(g);
                inventory->displayInventory();
                if (inventory->checkValue(g) > 0)
                {
                    monster->takeDamage(monster->getMaximumHp() * 0.3);
                }
                if (monster->isAlive())

                {
                    int hitOrMissM = GameEvents::hitOrMissMonster(); // hit or miss do monstro, implementar o miss
                    int mDamage = monster->monsterDamage();
                    player->takeDamage(mDamage); // discutir com o Bruno como vamos calcular o dano do monstro
                    std::cout << "The monster has dealt " << mDamage << " damage!" << std::endl;
                    player->PlayableCharacter::isAlive();
                }
                else
                {
                    std::cout << "You defeated the vampire master" << std::endl;
                }
            }
        }
        else
        {
            std::cout << "You have been defeated by the " << monster->getName() << std::endl;
            std::cout << "Better luck next time!" << std::endl;
            abort();
        }
    }
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