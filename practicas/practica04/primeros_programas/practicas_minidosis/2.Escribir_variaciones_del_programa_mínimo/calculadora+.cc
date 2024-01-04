#include <iostream>
#include <string>

int main() {
  int número1;
  int número2;
  std::cout << "Por favor, ingresa dos números a sumar" << std::endl;
  std::cin >> número1 >> número2;
  std::cout << "La respuesta es: " << número1 + número2 << std::endl;

  return 0;
}
