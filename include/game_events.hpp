#ifndef GAME_EVENTS_H
#define GAME_EVENTS_H
 /**
   * @brief Superclasse que gerencia os eventos que ocorrem no jogo.
 */

 class Game_events{
    private:
    /**
   * @param _game_on verifica se o jogo está ocorrendo ou não.
   * @param _attack_dice potência/valor do ataque sofrido
   * @param defense_dice defesa do personagem 
   * @param _item_drop_dice escolhe o equipamento a ser usado
   */

    bool _game_on;
    int _attack_dice;
    int defense_dice;
    int _item_drop_dice;
   public:
    /**
   * @brief Calcula o dano sofrido pelo personagem após ser atacado
   */
   virtual void take_damage();
    /**
   * @brief Cura o personagem, fazendo com que ele se recupere do dano sofrido.
   */
    void heal();
    /**
   * @brief mantém o jogo rodando a partir da geração de um número aleatório, o qual será rodado se game_end( )=1.
   */
    void roll_dice();
     /**
   * @brief avalia se o jogo deve continuar, com base no hp do personagem, se o hp for igual a zero, então, o atributo game_on=0, 
   * do contrário, game_on=1, e a função game_end().
   * @return game_on.
   */
    bool game_end();
    
};
#endif
