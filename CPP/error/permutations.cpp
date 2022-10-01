# include<iostream>
using namespace std;
//to calculate permutations of a string
void per(char *a,int i){
    //base case
    if(a[i]=='\0'){
        cout<<a<<" ";
        return;
    }
    //error below
    //recurseive case
    for(int j = i;a[j]!='\0';j++){
        swap(a[i],a[j]);
        per(a,i+1);
    }
}

int main(){
    char a[100];
    cin>>a;
    per(a,0);
    return 0;
}