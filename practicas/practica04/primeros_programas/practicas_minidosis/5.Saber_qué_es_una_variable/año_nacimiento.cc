#include <iostream>
#include <string>

int main() {
  int año;
  std::cout << "¿En qué año naciste?: ";
  std::cin >> año;
  std::cout << "Tienes " << 2023 - año << " años de edad." << std::endl;

  return 0;
}
