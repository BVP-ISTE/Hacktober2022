#include<iostream>
using namespace std;
int square(int *p){
    *p = (*p) * (*p);
    return *p;
}
int main(){
    int a = 10;
    
    cout<< square(&a) <<endl;
}
