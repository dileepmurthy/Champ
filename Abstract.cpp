#include <iostream>
using namespace std ;
class abstractionClass // declaring class
{
private :
int x , y ; // private variables x and y
public :
// method to set values of  all the declared private members
void set ( int a , int b ) // declaring public function set
{
x = a ;
y = b ;
}
void display () // declaring display() function
{
cout << " x  =  " << x  << endl ;
cout << " y  = " << y << endl ;
}
} ;
int main ()
{
abstractionClass obj ; // creating object of declared class
obj.set ( 110 , 250 ) ;
obj.display () ;
return 0 ;
}
