#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <iostream>
#include <string>
#include <set>

/**
 * @brief Classe responsavel pelos equipamentos disponíveis no jogo.
 */
class Equipment{
    public:
      /**
   * @brief Construtor padrao que inicializa todas as variaveis da classe.
   * @param name nome do equipamento
   * @param allowed_class classe que pode usar o equipamento
   * @param damage dano base do equipamento
   * @param drop_rate chance do equipamento aparecer para o usuário
   */
      Equipment(std::string name, std::string allowed_class, int damage, float drop_rate);

    private:
    std::string _name;
    std::string _allowed_class;
    int _damage;
    float drop_rate;
};


#endif