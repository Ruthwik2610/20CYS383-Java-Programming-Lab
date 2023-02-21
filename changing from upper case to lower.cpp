/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string>
#include<algorithm>


using namespace std;

int
main ()
{
  string line = "This IS a STring";
  transform (line.begin (), line.end (), line.begin (),::toupper);
  cout << line << endl;

  return 0;
}
