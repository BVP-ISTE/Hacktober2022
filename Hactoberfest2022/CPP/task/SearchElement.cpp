//- Search an Element in a Sorted & Rotated array using Binary Search
# include<bits/stdc++.h>
using namespace std;

void find(vector<int> &v,int target){
    int index;
    auto it = find(v.begin(),v.end(),target); //finds the index
    if(it!=v.end()){ //if the target element is found in the array
        index = it - v.begin();
        cout<<"The target element is present in the array at index "<<index<<endl;
        
    }
  //else not present
    else{
        cout<<"The target element is not present in the array"<<endl;
    }
}
int main(){
    int n,target;
    cin>>n>>target;
    vector<int> v;
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);
    }

    find(v,target);
    return 0;
}
