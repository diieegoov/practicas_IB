#include <iostream>
#include <string>

int main() {
  int dni{0};

  std::cin >> dni;
  const std::string kLetters{"TRWAGMYFPDXBNJZSQVHLCKE"};
  std::cout << "DNI letter: " << kLetters[dni % 23] << ‘\n’;
  return 0;
}
