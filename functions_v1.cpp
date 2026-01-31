/* My first program in C++ with functions */
#include <fstream>
#include <iostream>
#include <sstream>
#include <string.h>    // header-file for strings

using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

 int foo (int x )
  {
    cout << "  -> Function called via fnc ptr " << x << '\n' ;
  }   

 void printArray(const int *my_array, int length)
  {
    cout << " -> "  ;
    if (!my_array)
  	return;
    for (int index = 0; index < length; ++index)
         // cout << " -> "  ;
	 cout << my_array[index] << " " ;
    cout << '\n' ;
    cout << " In Function: "<< my_array << '\n' ;
  }


 int main ()
  {
   int (*fcnPtr) (int) { &foo } ;		// Function Ptr declared and function foo assigned

   cout << '\n' << '\n' ;
   int test_array [ 8 ] { 1,2,3,4,5,6,7,8 } ;
   printArray (test_array, 8 ) ;

   cout << " In Main first: " << printArray << '\n' ;
   cout << " In Main second: " << test_array << '\n' ;
   cout << " In Main and third: "  << &test_array << " " << *test_array << '\n' << '\n' ;
 
   ( *fcnPtr ) ( 4 ) ;				// Function foo called via Function Ptr

    cout << '\n' ;
    cout << '\n' ;

   return 0;
  }
