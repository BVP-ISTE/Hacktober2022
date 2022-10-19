# include<bits/stdc++.h>
using namespace std;
// We are given two coins of value x and y. We have to find the maximum of value of a XOR b where x <= a <= b <= y.

// Input Format
// 5
// 6
// Output
// 3
int main(){
    int a,b;
    int max = INT_MIN;
    cin>>a>>b;

    for(int i = a; i<=b;i++){
        for(int j = i;j<=b;j++){
            if((i^j)>max){
                max=(i^j);
            }
        }
    }

    cout<<max<<endl;

    return 0;
}
