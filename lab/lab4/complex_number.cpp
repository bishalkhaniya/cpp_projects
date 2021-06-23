#include<iostream>
using namespace std;


class Complex
{
	private:
		float real;
		float imag;
	public:
		
		Complex(){
			real = 0;
			imag = 0;
		}
		
		Complex(float r, float i){
			real = r;
			imag = i;
		}
		
		Complex add(Complex c){
			
			return Complex(real + c.real, imag + c.imag);
		} 
	
		void display(){
			cout<<"("<<real<<","<<imag<<")"<<endl;
		}
};

int main(){
	Complex c1(2, 5.5), c2(3.3, 4), c3;
	c3 = c1.add(c2);
	c1.display();
	c2.display();
	cout<<"And the sum is :"<<endl;
	c3.display();
	return 0;
}