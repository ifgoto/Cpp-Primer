//rewrite the ex 1.4.1 use the loop for for instead of while


#include <iostream>

int main()
{
  int sum = 0, val = 1;
  // keep executing the while as long as val is less than or equal to 10
  for (int i = val; i <= 10; ++i){
    sum += i;  // assigns sum + val to sum
  }
  std::cout << "Sum of 1 to 10 inclusive is " 
            << sum << std::endl;
	return 0;
}
