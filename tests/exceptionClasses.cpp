#include <exception>

using namespace std;

class ErroDeJogoException : public std::exception {
  public:
  virtual const char* what() const noexcept {
    return "Erro Genérico!";
  }
};
class EntradaInvalida :public ErroDeJogoException {
  public:
    virtual const char* what() const noexcept {
      return "Invalid character, please type again:";
    }
};

