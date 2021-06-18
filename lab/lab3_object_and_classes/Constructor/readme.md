# Constructor Overloading 
The constructor overloading can be defined as the concept of having more than one constructor with different parameters so that every constructor can perform a different task.

# Why do we use constructor overloading in C++? 
Benefits of constructor overloading in C++ is that, it gives the flexibility of creating multiple type of objects of a class by having more number of constructors in a class, called constructor overloading. In fact, it is similar to C++ function overloading that is also know as compile time polymorphism.

# Prerequisites Of Constructor Overloading 
In C++, We can have more than one constructor in a class with same name, as long as each has a different list of arguments.This concept is known as Constructor Overloading and is quite similar to function overloading.

Overloaded constructors essentially have the same name (name of the class) and different number of arguments. A constructor is called depending upon the number and type of arguments passed. While creating the object, arguments must be passed to let compiler know, which constructor needs to be called.

## C++ program to illustrate Constructor overloading 

#include <iostream>
using namespace std;
 
void print(int i) {
  cout << " Here is int " << i << endl;
}
void print(double  f) {
  cout << " Here is float " << f << endl;
}
void print(char const *c) {
  cout << " Here is char* " << c << endl;
}
 
int main() {
  print(10);
  print(10.10);
  print("ten");
  return 0;
}