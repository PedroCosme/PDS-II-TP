#ifndef _EXCECAO_HPP_
#define _EXCECAO_HPP_

#include <exception>

using namespace std;

/**
 * @brief Exceção que lida com erros genéricos
 *
 * @details Trata erros gerais do jogo.
 */
class ErroDeJogoException : public std::exception
{
public:
  virtual const char *what() const noexcept
  {
    return "Erro Genérico!";
  }
};

/**
 * @brief Exceção que lida com erros de comando inválido
 *
 * @details Trata de erros de escolhas inválidas do usuário.
 */
class EntradaInvalidaException : public ErroDeJogoException
{
public:
  virtual const char *what() const noexcept
  {
    return "Invalid command, try again!";
  }
};

/**
 * @brief Exceção que lida com erros relacionados a falta de itens no inventário
 *
 * @details Trata de erros de subtração de itens inexistentes do inventário, impedindo o jogador de usar itens que ele não possui.
 */
class SubtractItemException : public ErroDeJogoException
{
public:
  virtual const char *what() const noexcept
  {
    return "You don't have enough items to subtract!";
  }
};
#endif