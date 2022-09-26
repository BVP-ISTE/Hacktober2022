# include<iostream>
using namespace std;
//you have to generate paranthesis (()),((())),etc;
void paranthesis(char *a, int n,int o,int c,int i){
    // base case
    if(i == 2*n){
        a[i]=='\0';
        cout<<a<<endl;
        return;
    }
    //error below
    //recursive case
    if(o>c){
        a[i] = ')';
        paranthesis(a,n,o,c,i+1);
    }
    if(o<n){
        a[i]= '(';
        paranthesis(a,n,o+1,c+1,i+1);
    }
}

int main(){
    int n;
    cin>>n;
    char a[100];
    paranthesis(a,n,0,0,0);
    return 0;
} 