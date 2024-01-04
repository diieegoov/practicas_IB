#include <iostream>
#include <string>

int main() {
  std::string nombre;
  int edad;
  std::cout << "¿Cómo te llamas?: ";
  std::cin >> nombre;
  std::cout << "¿Y cuántos años tienes?: ";
  std::cin >> edad;
  std::cout << "Hola, eres " << nombre << " y tienes " << edad << " años."
            << std::endl;

 return 0;
} 
