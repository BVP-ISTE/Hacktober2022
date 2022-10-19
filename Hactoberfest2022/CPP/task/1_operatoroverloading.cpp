// A sample code is given below of the q...overload the operators


#include <iostream>
using namespace std;

class Complex
{
    int real;
    int img;

public:

    Complex(){
        real = 0;
        img = 0;
    }
//parametrised constructor
    Complex(int r,int i){
        real = r;
        img = i;
    }

    void setreal(int r){
        real = r;
    }

    void setimg(int i){
        img = i;
    }

    int getreal(){
        return real;
    }

    int getimg(){
        return img;
    }

    void add(Complex &x){
     
    }
    
    void print(){
        if(img>0){
            cout<<real<<"+"<<"i"<<img<<endl;
        }
        else{
            cout<<real<<"-"<<"i"<<-img<<endl;
        }
    }

};



istream& operator>>(istream &cin,Complex &x){
   
}

ostream& operator<<(ostream &cout,Complex &x){
    
}

int main()
{
    Complex c1,c2;
    cin>>c1>>c2;
    c1.add(c2);
    cout<<c1;


    return 0;
}