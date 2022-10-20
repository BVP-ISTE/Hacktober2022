#include <iostream>
using namespace std;

//...You have to print the pattern like given below
//input --- >   4
//output --->
//*
//* *
//* * *
//* * * *

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}