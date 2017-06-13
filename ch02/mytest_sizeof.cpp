#include <iostream>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main()
{
  cout << " sizeof bool " << sizeof(bool) << endl;
  cout << " sizeof char " << sizeof(char) << endl;
  cout << " sizeof wchar_t " << sizeof(wchar_t) << endl;
  cout << " sizeof char16_t " << sizeof(char16_t) << endl;
  cout << " sizeof char32_t " << sizeof(char32_t) << endl;
  cout << " sizeof short " << sizeof(short) << endl;
  cout << " sizeof int " << sizeof(int) << endl;
  cout << " sizeof long " << sizeof(long) << endl;
  cout << " sizeof long long " << sizeof(long long) << endl;
  cout << " sizeof float " << sizeof(float) << endl;
  cout << " sizeof double " << sizeof(double) << endl;
  cout << " sizeof long double " << sizeof(long double) << endl;


  return 0;
}


//as the 64bit result
//g++ -std=c++11  -I..  mytest_sizeof.cpp -o mytest_sizeof.exe                                             

// $./mytest_sizeof.exe 
// sizeof bool 1
// sizeof char 1
// sizeof wchar_t 4
// sizeof char16_t 2
// sizeof char32_t 4
// sizeof short 2
// sizeof int 4
// sizeof long 8 //32bit was 4
// sizeof long long 8
// sizeof float 4
// sizeof double 8
// sizeof long double 16



//as the 32bit result
// $g++ -std=c++11  -I.. -m32 mytest_sizeof.cpp -o mytest_sizeof.exe



// $./mytest_sizeof.exe 
// sizeof bool 1
// sizeof char 1
// sizeof wchar_t 4
// sizeof char16_t 2
// sizeof char32_t 4
// sizeof short 2
// sizeof int 4
// sizeof long 4 //diffent ...64 bit was 8
// sizeof long long 8
// sizeof float 4
// sizeof double 8
// sizeof long double 12
