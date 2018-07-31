#include <iostream> 
using namespace std; 
 
class B { 
public: 
  B() { cout << "Constructing base portion\n"; } 
  ~B() { cout << "Destructing base portion\n"; } 
}; 
 
 //class D inherits class b
class D: public B { 
public: 
  D() { cout << "Constructing derived portion\n"; } 
  ~D() { cout << "Destructing derived portion\n"; } 
}; 
 
int main() 
{ 
  D ob; D *p = new D;
  
  delete p;
  
  cout << "help" << endl;
 
  // do nothing but construct and destruct ob 
 
  return 0; 
}
