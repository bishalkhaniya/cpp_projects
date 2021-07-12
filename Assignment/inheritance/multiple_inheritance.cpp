#include<iostream>
using namespace std;

class Parents
{
private:
  int a;
  int b;
public:
    Parents(){
        a=0;
        b=0;
    }
    Parents(int rabi, int aditya){
        a=rabi;
        b=aditya;
        cout<<rabi*aditya<<endl;
    }
    
    ~Parents(){
        cout<<"destructor 1"<<endl;
    }
};

class Algebra
{
private:
    int x=0;
    int y=0;
public:
    Algebra(){
        int x=0;
        int y=0;
    }
    Algebra(int abhishek, int sani){
    cout <<abhishek+sani<<endl;
    }   
    ~Algebra(){
        cout<<"destructor2"<<endl;
    }
};

class derived: public Parents, Algebra {

public:
    derived(int a, int b, int x, int y):Parents(a,b),Algebra(x,y){
        cout<<"multiplication"<<endl;
        cout<<"addition"<<endl;
    }
    ~derived(){
        cout<<"destuctor 3"<<endl;
    }


};


int main(){
    
    derived d1(1,2,3,4);
    
    return 0;
}