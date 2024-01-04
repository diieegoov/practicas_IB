#include <iostream>
#include <string>

int main() {
  std::string nombre;
  int edad;
  std::cout << "Escriba su nombre: ";
  std::cin >> nombre;
  std::cout << "Escriba su edad: ";
  std::cin >> edad;
  std::cout << std::endl; 
  std::cout << "Tu nombre es " << nombre  << " y tienes " 
            << edad << " años." << std::endl;
  return 0;
}
