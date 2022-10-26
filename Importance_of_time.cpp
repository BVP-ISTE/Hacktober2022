#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    queue<int> a;
    int b[n],t,ans=0;
    for(int i=0;i<n; i++){
        cin>>t;
        a.push(t);
    } 
    for(int i=0; i<n; i++) cin>>b[i];
    for(int i=0; i<n; i++){
        while(a.front()!=b[i]){
            a.push(a.front());
            a.pop();
            ans++;
        }
        ans++;
        a.pop();
    }
    cout<<ans<<endl;
}
