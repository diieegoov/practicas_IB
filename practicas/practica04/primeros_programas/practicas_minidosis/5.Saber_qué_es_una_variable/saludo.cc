#include <iostream>
#include <string>

int main() {
  std::cout << "¿Cuál es tu nombre?: ";
  std::string nombre;
  std::cin >> nombre;
  std::cout << "Encantado, " << nombre << ". Eres un gran programador!."
            << std::endl;

  return 0;
}
