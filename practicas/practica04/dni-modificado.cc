#include <iostream>
#include <string>

int main() {
  int dni{0};

  std::cin >> dni;
  const std::string kLetters{"TRWAGMYFPDXBNJZSQVHLCKE"};
  std::cout << "El número de DNI es: " << kLetters[dni % 23] << std::endl;
  return 0;
}
