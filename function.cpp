#include <iostream>
using namespace std;

int add(int a,int b,int c)
{
  return(a+b+c);
}

int main(){
  cout << add(4,3,9);
  return 0;
}
// There is no syntax or structure for overloading of a single variable
// Error because multiple values are assigned to the variable add.
// All the variables must be different when assigned as a function.
// Return datatype is very important as everything depends on it..
