#include<iostream>
using namespace std;
 
class Parent {
  protected:
    int id_protected;
 
};
 
class Child: public Parent {
  public:
    public:
    void setId(int id){
      id_protected=id;
    }
 
    void display(){
      cout<<"id protected is :"<<id_protected <<endl;
    }
 
};
 
int main(){
  Child c1;
  c1.setId(1);
  c1.display();
  return 0;
}