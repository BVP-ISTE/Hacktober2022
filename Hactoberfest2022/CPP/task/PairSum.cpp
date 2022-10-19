//You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.
// Note:
// Each pair should be sorted i.e the first value should be less than or equals to the second value.
// Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.

// Input Format:
// The first line of input contains two space-separated integers 'N' and 'S', denoting the size of the input array and the value of 'S'.
// The second and last line of input contains 'N' space-separated integers, denoting the elements of the input array: ARR[i] where 0 <= i < 'N'.

//Output Format:
// Print 'C' lines, each line contains one pair i.e two space-separated integers, where 'C' denotes the count of pairs having sum equals to given value 'S'.
# include<bits/stdc++.h>
using namespace std;

void print(vector<pair<int,int>>&result){
    for(int i=0;i<result.size();i++){
        cout<<result[i].first<<" "<<result[i].second<<endl;
    }
}
void pairsum(vector<int> &v,int n,int s){
    vector<pair<int,int>> result;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==s){
                result.push_back(make_pair(min(v[i],v[j]),max(v[i],v[j])));
            }
        }
    }

    sort(result.begin(),result.end());
    print(result);
}

int main(){
    int n,s;
    cin>>n>>s;

    vector<int> v;
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);
    }

    sort(v.begin(),v.end());
    pairsum(v,n,s);
    return 0;
}
