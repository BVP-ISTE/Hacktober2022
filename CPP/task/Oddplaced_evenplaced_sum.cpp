// Take N as input. Print the sum of its odd placed digits and sum of its even placed digits.
// Take N as input. Print the sum of its odd placed digits and sum of its even placed digits.
#include <iostream>
using namespace std;
int main() {
    cout<<"Enter Value of n : ";
    int n;
    cin>>n;

    int pos = 1;
    int odd_sum = 0;
    int even_sum = 0;

    while(n > 0){
        int x = n%10;
        n = n/10;
        if(pos%2 == 1){
            odd_sum += x;
        }
        else{
            even_sum += x;
        }
        pos++;
    }
    cout<<"odd sum = "<<odd_sum<<endl;
    cout<<"even sum = "<<even_sum<<endl;
}
