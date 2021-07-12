#include<iostream>
using namespace std;
class Bishal
{

public:
    Bishal(){
        cout<<"constructor 1"<<endl;
    }
       ~Bishal(){
        cout<<"destructor 1"<<endl;
    }
    void print(){
    cout<<"1st class"<<endl;
    }
};

class Rabi:public virtual Bishal  {


    public:
    void display(){
        cout<<"1st derived class "<<endl;
    }


};
class Aaditya:public virtual Bishal  {


    public:
    void display(){
        cout<<"2nd derived class"<<endl;
    }


};
class abhishek:public Rabi, Aaditya  {


    public:
    void display1(){
        cout<<"Final inheritance"<<endl;
    }

};
int main(){
    abhishek a1;
    a1.print();
    a1.display1();


    return 0;
}