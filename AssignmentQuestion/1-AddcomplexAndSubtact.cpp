#include<iostream>
using namespace std;

class Complex {
    public:
    double real;
    double imag;

    Complex(double tempReal=0,double tempImag=0)
    {
        this->real=tempReal;
        this->imag=tempImag;
    }

    Complex addition(const Complex &c)
    {
        return Complex(this->real+c.real,this->imag+c.imag);
    }

    Complex subtraction(const Complex &c)
    {
        return Complex(this->real-c.real,this->imag-c.imag);
    }

    void display()
    {
        cout<<real;
        if(imag>=0){
            cout<<" + "<<imag<<"i"<<endl;
        }
        else{
            cout<<" - "<<-imag<<"i"<<endl;
        }
        cout<<endl;
    }
};

int main()
{
    double real1,imag1,real2,imag2;
    cout<<"Enter real and imaginary part of first complex number: ";
    cin>>real1>>imag1;
    cout<<"Enter real and imaginary part of second complex number: ";
    cin>>real2>>imag2;

    Complex num1(real1,imag1);
    Complex num2(real2,imag2);

    Complex sum=num1.addition(num2);
    Complex diff=num1.subtraction(num2);

    cout<<"Sum: ";
    sum.display();

    cout<<"Difference: ";
    diff.display();


}