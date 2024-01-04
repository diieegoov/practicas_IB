#include <iostream>
int main() {
  int number1{0};
  int number2{0};
  int number3{0};

  std::cin >> number1 >> number2 >> number3;
  std::cout << number1 * number1 << " " 
            << number2 * number2 << " " 
            << number3 * number3 << std::endl;
  return 0;
}
