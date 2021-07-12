#include<iostream>
using namespace std;

class base
{
private:
    
public:
    base(){
        cout<<"constructor of base is called:"<<endl;
    }

    ~base(){
        cout<<"destruction of base is called"<<endl;
    }

};

class derived : public base 
{
private:
    
public:
    derived() {
cout<<"constructor"<<endl;
    }
        ~derived(){
            cout<<"destructor"<<endl;
        }

};



int main(){
    derived d1;

    return 0;
}