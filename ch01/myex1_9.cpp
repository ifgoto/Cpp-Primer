//count from 50 to 100 summary
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int sum(int lo, int hi)
{
  int sum = 0;
  while (lo < hi + 1) sum += lo++;
  return sum;
}

int main()
{
  cout << "summary from 50 to 100 " << sum(50, 100) << endl;  
  return 0;
}
