#include "gameEvents.hpp"

GameEvents::GameEvents(){};
GameEvents::~GameEvents(){};


void GameEvents::battle(PlayableCharacter player, Enemy monster)
{
    while (player.PlayableCharacter::isAlive() && monster.Monster::isAlive())
    {
        std::cout
            << player.PlayableCharacter::getName() << " vs " << monster.Monster::getName() << "\n"
            << "HP: " << player.currentHealth() << " HP:" << monster.getCurrentHp() << "\n"
            << "Choose: (a) attack \n";
        char playerChoice = '0';
        while (playerChoice != 'a')
        {
            playerChoice = getchar();
        }
        int hitOrMiss = GameEvents::hitOrMissPlayer(); // // hit or miss do monstro, implementar o miss
        std::cout << hitOrMiss << std::endl;
        if (hitOrMiss > 24 && hitOrMiss < 90)
        {
            monster.takeDamage(player.returnWeapon().damageRange()); // a ideia aqui é chamar a função que calcula o dano da arma que o player está usando (ainda a ser feita)
            std::cout << "The monster has taken X damage" << std::endl;
        }
        else if (hitOrMiss >= 90)
        {
            /* mesma coisa acima, só pegar e dobrar o dano */
        }

        if (monster.isAlive())

        {
            int hitOrMissM = GameEvents::hitOrMissMonster(); // hit or miss do monstro, implementar o miss

            std::cout << hitOrMissM << std::endl;

            player.takeDamage(monster.monsterDamage(20)); // discutir com o Bruno como vamos calcular o dano do monstro
        }
    }
    if (player.isAlive())
    {
        std::cout << "You defeated the " << monster.getName() << "and found" << monster.goldWorth() << "in it's corpse !\n"; // retorna quanto de ouro o monstro vale
        std::cout << "X xp added" << std::endl;                                                                              // implementar o quanto de xp o monstro fornece
       // unsigned int xp = monster.giveXp();                                                                                  // FUNÇÃO FANTASMA QUE DEVE SER ADICIONADA A CLASSE ENEMY. TENHO UMA IDEIA BOA
       // player.setXp(xp);

        // IMPLEMENTAR AQUI COMO ADICIONAR OURO E EXPERIENCIA ATRAVES DE DERROTA DE MONSTROS
    }
    else
    {
        std::cout << "You were defeated by the " << monster.getName() << "!\n";
    }
}

unsigned int GameEvents::calcDamage(unsigned int damageRange)
{
}
int GameEvents::hitOrMissMonster()

{

    srand(time(NULL));

    int chanceMonster = rand() % 100;
   
    std::cout << chanceMonster << std::endl;

    if (chanceMonster < 24)
    {
        std::cout << chanceMonster << std::endl;
        std::cout << "The enemy swang his weapon at you but missed for an inch!" << std::endl;
    }
    else if (chanceMonster >= 90)
    {
        std::cout << chanceMonster << std::endl;
        std::cout << "The enemy's attack was so strong you slipped and fell on your arse" << std::endl;
    }
    std::cout << "Chance Monster: "<< chanceMonster << std::endl;
    return chanceMonster;
}
int GameEvents::hitOrMissPlayer(){   
    
    srand(time(NULL));

    int chancePlayer = rand() % 100;
    if (chancePlayer < 24)
    {
        std::cout << chancePlayer << std::endl;
        std::cout << "You swing your weapon at the terrible monster but missed by an inch!" << std::endl;
    }
    else if (chancePlayer >= 90)
    {
        std::cout << chancePlayer << std::endl;
        std::cout << "Your attack was so strong you completely smashed the monster's leg" << std::endl;
    }
std::cout << "Chance Player: "<< chancePlayer << std::endl;

    return chancePlayer;
}

