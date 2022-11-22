#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <map>
#include <string>
#include "weapon.hpp"
/**
 * @brief Classe responsavel pelos equipamentos disponíveis no jogo.
 */
class Equipment
{
public:
  /**
   * @brief Construtor padrao que inicializa todas as variaveis da classe.
   * @param name nome do equipamento
   * @param allowed_class classe que pode usar o equipamento
   * @param damage dano base do equipamento
   * @param drop_rate chance do equipamento aparecer para o usuário
   */
  Equipment(void);
  ~Equipment(void);

  bool addItem(WEAPONS itemId, unsigned int quantity = 1);

  bool removeItem(WEAPONS itemId, unsigned int quantity = 1);

  void clear(void);

  const std::map<WEAPONS, unsigned int> &getItems(void);

private:
  std::map<WEAPONS, unsigned int> _items;
  unsigned int _capacity;
};

#endif