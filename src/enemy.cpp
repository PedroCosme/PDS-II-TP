#include "enemy.hpp"

Enemy::Enemy(uint gold,
             uint xpWorth,
             std::string name,
             int currentHp,
             uint maxHp,
             uint maxDamage,
             uint minDamage) : _gold(gold), _xpWorth(xpWorth), Monster(name, currentHp, maxHp, maxDamage, minDamage){};

Enemy::~Enemy() {}

unsigned int Enemy::goldWorth() const
{
    return _gold;
}

unsigned int Enemy::xpWorth()
{
    return _xpWorth;
}

int Enemy::hitOrMiss()
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

// void Enemy::attack(PlayableCharacter *player, Enemy *monster, Inventory *inventory)
// {
//     int hitOrMiss = Enemy::hitOrMiss(); // hit or miss do monstro
//     if (hitOrMiss > 24 && hitOrMiss < 90)
//     {
//         int damage = monster->monsterDamage();
//         player->takeDamage(damage);
//         std::cout << "The monster has dealt " << damage << " damage!" << std::endl;
//         player->PlayableCharacter::isAlive();
//     }
//     else if (hitOrMiss >= 90)
//     {
//         int damage = monster->monsterDamage();
//         player->takeDamage(damage * 2);
//         std::cout << "The monster has dealt " << damage << " damage!" << std::endl;
//         player->PlayableCharacter::isAlive();
//     }
//     else if (hitOrMiss < 24)
//     {
//         player->takeDamage(0);
//     }

//     else
//     {
//         std::cout << "You defeated the " << monster->getName() << " and found " << monster->goldWorth() << " gold coins in it's corpse !\n"; // retorna quanto de ouro o monstro vale
//         player->addGold(monster->goldWorth());
//         std::cout << monster->xpWorth() << " xp gained" << std::endl;
//         player->setXp(monster->xpWorth());
//         monster->~Enemy();
//     }
// }