/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class Triangle{
    private:
    int l;
    int b;
    public:
void read(){
        cin>>l;
        cin>>b;
    }
void Area()
{
    cout<<0.5 *l*b<<endl;
}
};

int main()
{
Triangle T;
T.read();
T.Area();


    return 0;
}