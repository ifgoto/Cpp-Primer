#include <iostream>

int main()
{
  std::cout << "Please input two number to multiply: " << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;

  std::cout << "The product of " << v1 << " and " ;
  << v2 << " is " << v1 * v2 << std::endl;

  // std::cout << "The product of "  ;
  // std::cout << v1 ;
  // std::cout << " and " ;
  // std::cout << v2  ;
  // std::cout << " is " ;
  // std::cout << v1 * v2 << std::endl;
  return 0;
}
