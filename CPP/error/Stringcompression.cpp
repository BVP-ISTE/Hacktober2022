# include<iostream>
# include<cstring>
using namespace std;
// Take as input S, a string. Write a function that does basic string compression. Print the value returned. E.g. for input “aaabbccds” print out a3b2c2d1s1.
// Si:- aaabbccds
// So:- a3b2c2d1s1



void compress(char a[]){
    int len=strlen(a);
    int j=0;
    while(j<len){
        int cnt=1; //change cnt = 0 to cnt = 1
        while(j<=len-2 and a[j]==a[j+1]){
            cnt++; //incremented each time while traversing to same charachter
            j++;
        }
        cout<<a[j];
        
        cout<<cnt;
            j++;
        
    }
}


int main(){
    char a[1000];
    cin.getline(a,1000);

    compress(a);

    
    return 0;
}