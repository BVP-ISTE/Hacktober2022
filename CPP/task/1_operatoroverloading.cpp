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
        real += x.real ; 
        img +=x.img ;  
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
   int r, i ; 
   cin >> r >> i ; 
    x.setreal(r) ; 
    x.setimg(i) ;
    return cin ; 
}

ostream& operator<<(ostream &cout,Complex &x){
    x.print(); 
    return cout ; 
}

int main()
{
    Complex c1,c2;
    cin>>c1>>c2;
    c1.add(c2);
    cout<<c1;


    return 0;
}
