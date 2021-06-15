/*WAP to define a class named employee with it's data members ID, Name and Salary. 
Read records of five employees and display the record in tabular form 
[Hint- to make the data display in tabular form, use "/t"(escape sequence) for line spaces]*/

#include<iostream>
using namespace std;
 
 class employee{
  char name;
  int id;
  double salary;
 
public:
void input(){
    cout<<"Enter name of employee:"<<endl;
    cin>>name;
    cout<<"Enter id of employee :"<<endl;
    cin>>id;
    cout<<"Enter salary of employee:"<<endl;
    cin>>salary;
  }
 
void display(){
    cout<<"Name:"<<name<<endl;
    cout<<"id number:\t"<<id<<endl;
    cout<<"salary:\t"<<salary<<endl;
  }
};
int main(){
    employee e[5];
    for(int i=0;i<5;i++){
    e[i].input();
  }
    for(int i=0;i<5;i++){
    e[i].display();
  }
  return 0;
}

 
