#include <iostream>
#include <string>
#include "game_events.hpp"
#include "warrior.hpp"
#include "mage.hpp"
#include <exception>
int main()
{
    std::string error;
    error = "Erro!";
    std::cout << "Bem vindo ao jogo, começaremos criando um personagem" << std::endl;
    std::cout << "Escolha um nome para o seu personagem:" << std::endl;
    std::string playerName;
    std::cin >> playerName;
    std::cout << "Bem-vindo(a) ao nosso simulador de Batalha RPG, " << playerName << "!" << std::endl;
    int choosen_class;
    Mage mage;
    Warrior warrior;
    {
        try
        {
            std::cout << "Agora, escolha uma classe para o seu personagem. Digite 1 para jogar como mago e 2 como guerreiro" << std::endl;
            std::cin >> choosen_class;
            if (choosen_class == 1)
            {
                Mage *mage = new Mage(playerName);
            }
            else if (choosen_class == 2)
            {
                Warrior *warrior = new Warrior(playerName);
            }

            if (choosen_class != 1 || choosen_class != 2)
            {
                throw error;
            }
        }
        catch (...)
        {
            std::cout << error << std::endl;
        }
    }

    return 0;
}