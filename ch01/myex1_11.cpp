//print the numbers from a range
#include <iostream>

void print_range_number(int lo, int hi)
{
  if (lo > hi) {
    print_range_number(hi, lo);
    return;
  }

  for (int i = lo; i <= hi; ++i){
    std::cout << i << std::endl;
  }

  std:: cout << std::endl;
  return ;
}

int main()
{
  std::cout << "please input the range to print, eg. input 3 6, ouput 3,4,5,6" << std::endl;
  int lo = 0, hi = 0;
  std::cin >> lo >> hi;
  print_range_number(lo, hi);
  return 0;
}
