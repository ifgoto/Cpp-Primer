#include <iostream>
// #include <unistd.h>
// #include <stdio.h>
// #include <cstdio>   
#include <typeinfo>  

using std::cout;
using std::cin;
using std::cerr;
using std::endl;


struct foo {}

double myret(void)
{
    return 34.5;
}

int main()
{
    #if 0
    // for (int i = 10; i >= 0; --i)
    for (unsigned i = 10; i >= 0; --i) {
        std::cout << i << std::endl;
        sleep(1);
    }
    #endif


    // unsigned u = 11; // start the loop one past the first element we want to print
    // while (u > 0) {
    //     --u;        // decrement first, so that the last iteration will print 0
    //     std::cout << u << std::endl;
    // }


// //if the sizeof two number was equal, just convert to the unsigned,
//     //or else just convert to the sizeof bigger
//     int i = -1, j = 1;
//     long m = -1;
//     unsigned k = 1;

//     cout << i * j << endl;
//     cout << i * k << endl;
//     cout << m * k << endl;


    // cout << "*" << endl;
    // cout << "\7" << endl;
    // cout << "*" << endl;
    // cout << "\12" << endl;
    // // cout << "*" << endl;
    // cout << "\115" << endl;

    // bool mytest=false; 


    // cout << "sizeof string sizeof(\'a\') " <<sizeof('a') << endl;
    // cout << "sizeof string sizeof(L\'a\') " <<sizeof(L'a') << endl;
    // cout << "sizeof string sizeof(u8\"a\") " <<sizeof(u8"a") << endl;
    // // cout << "sizeof string sizeof(u16\"a\") " <<sizeof(u16"a") << endl;
    // // cout << "sizeof string sizeof(u32\"a\") " <<sizeof(u32"a") << endl;

    // cout << "sizeof string sizeof(\"a\") " <<sizeof("a") << endl;
    // cout << "sizeof string sizeof(L\"a\") " <<sizeof(L"a") << endl;
    // cout << "sizeof string sizeof(L\"a\") " <<sizeof(L"a") << endl;


    // int day = 09;
    // float ff= 1024f; 


    // std::cout << 2 << "\115\012";
    // std::cout << 2 << "\t\115\012";



    // double price = 9.99, ff = price * 11.2;
    // double fff = myret();

    // int a = 0;
    // int b = {0};
    // int c(0);
    // int d{0};



    // long double ld = 3.1415926;
    // int a{ld}, b={ld};
    // int c(ld), d= ld;

    // printf("%d %d %d %d\n", a, b, c,d);


    // int aaa;
    //  std::cin >>  aaa;
    // extern int ix = 1024;
 // int double = 3.14;
 // int _;
 // int catch-22;
 // int 1_or_2 = 1;
 // double Double = 3.14;



   // int i = {3.14};
    // int i = 3.14;
    // double a=b=9999.99;


    // int a = 3;
    // int &ra = a;
    // int &&rra = &ra;  

    // int &rb =  3;
    // double db = 3.4;
    // int &rc = db;


    #if 0
    int i = 42;
    int &r = i;
    int *p;
    p = &i;
    *p = i;
    int &r2 = *p;
    // int &r3 = p; //error
    int*  &r3 = p;
    #endif


    #if 0

    int *p1 = nullptr; //c++11 import
    int *p2 = 0;
    int *p3 = NULL;



    char arr[100];
    char *pend = &arr[99];
    char *pa = pend+1;
    char *pb = pend+2;


    if (pa == pb ){
        printf("equal\n");
    } else {
        printf("NOT equal\n");
    }


    #endif


    #if 0
    int a = 43;
    int *pa = &a;
    int &ra = a;


    cout << &a << a << endl;
    *pa = 3;
    cout << pa << a << endl;
    cout << ra << &ra << &a <<  pa << a <<  &pa <<  endl;
    ra = 4;
    cout << a << endl;

    #endif


    #if 0
    int i = 3;
    int *pa;
    int *&r = pa;
    //int &*r = pa; error


    r= &i;
    *r = 4;

    cout << i << endl;  

    #endif



    #if 0
    int i = 4;
    const int cj = i;
    int k = cj;
    #endif


    // int i = 42;
    // const int &ci = i;

    // int j = ci * 2;
    // int &rj = ci * 2;



    // double dval = 3.14;
    // const int &ri = dval;

    // cout << ri << endl;  

    // const int temp = dval;
    // const int &ri2 = temp;

    // cout << ri2 <<endl;  



    // int i =42;
    // int &ri = i;
    // const int &r2 = i;

    // const int ci = 44;

    // //int &ri3 = ci; error   cannot reference of type 'int&' from expression of type 'const int'


    #if 0
    const double dval = 3.14;
//    double *pdval = &dval; error
    const double *cpdval = &dval;

    // *cpdval = 42;   //error
    double mypi = 3.14159;
    cpdval =  &mypi;
    // *cpdval = 33;  
    //  const const double *ccpdval = &mypi;
     const double *const ccpdval = &mypi;
     cout << *ccpdval << endl;

     //ccpdval = &dval; error

     #endif



     #if 0
     int i = 0, &r = i;
     auto a = r;

     const int ci = i , &cr = ci;
     auto b = ci;
     auto c = cr;

     auto d = &i;
     auto e = &ci;

     auto &g = ci;
      
     cout << "a=" << a <<" b=" << b << " c=" << c << " d=" << d << " e=" << e <<" g=" << g << endl;

     a  = 42;
     b  = 42;
     c  = 42;
     d  = 42;
     e  = 42;
     g  = 42;
     #endif
     




     #if 0

     const int i = 42;
     auto j = i;
     const auto &k = i;
     auto *p = &i;
     const auto j2 = i, &k2 = i;


     cout << "i " << typeid(i).name() << endl;
     cout << "j " << typeid(j).name() << endl;
     cout << "k " << typeid(k).name() << endl;
     cout << "p " << typeid(p).name() << endl;
     cout << "j2 " << typeid(j2).name() << endl;
     cout << "k2 " << typeid(k2).name() << endl;
      
     #endif



    return 0;
}
