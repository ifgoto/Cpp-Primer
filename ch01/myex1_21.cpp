
//read the transaction and print it to the standard output


#include <iostream>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main()
{
  Sales_item t1, t2;

  cin >> t1 >> t2;

  if (t1.isbn() != t2.isbn()) {
    cerr << "t1.isbn <> t2.isbn" << endl;
    return -1;
  }
  cout << t1 + t2 << endl;

  return 0;
}
