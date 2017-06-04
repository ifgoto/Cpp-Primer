#include <iostream>
#include "Sales_item.h"



using std::cin;
using std::cout;
using std::cerr;
using std::endl;


int main()
{
  int cnt = 0;
  Sales_item curr_trans, trans;

  if(cin >> curr_trans) {
    cnt = 1;
  } else {
    cerr << "input error" << endl;
    return -1;
  }
  while (cin >> trans) {
    if (trans.isbn() == curr_trans.isbn()) {
      cnt++;
    } else {
      cout << curr_trans << " has " << cnt << " times" << endl;
      cnt = 1;
      curr_trans = trans;
    }
  }
  cout << curr_trans << " has " << cnt << " times" << endl;
  return 0;
}
