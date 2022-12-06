#ifndef _EXCECAO_HPP_ 
#define _EXCECAO_HPP_

#include <exception>


using namespace std;

class ErroDeJogoException : public std::exception {
  public:
  virtual const char* what() const noexcept {
    return "Erro Genérico!";
  }
};

class EntradaInvalidaException : public ErroDeJogoException {
  public:
  virtual const char* what() const noexcept {
    return "Invalid command, try again!";
  }
};

class SubtractItemException : public ErroDeJogoException{
    public:
    virtual const char* what() const noexcept{
        return "You don't have enough items to subtract!";
    }
};
#endif