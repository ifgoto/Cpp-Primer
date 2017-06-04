//read the transaction and print it to the standard output


#include <iostream>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
  Sales_item trans;

  while (cin>>trans) {
    cout << trans << endl;
  }
  return 0;
}
