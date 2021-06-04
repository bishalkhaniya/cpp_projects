#include<iostream>
using namespace std;
 
void add(int x,int y){
  cout<<"Sum is :"<<x+y<<endl;
}
 
void add(double a,int y,double b){
  cout<<"Sum is :"<<a+y+b<<endl;
}
 
void add(int x,double c){
  cout<<"Sum is :"<<x+c<<endl;
}
 
int main(){
  add(2,4);
  add(3.5,5,6.99);
  add(7,9.97);
 
  return 0;
}