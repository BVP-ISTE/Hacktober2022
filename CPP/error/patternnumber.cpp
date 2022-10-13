# include<iostream>
using namespace std;
// Take N (number of rows), print the following pattern (for N = 4)
// 1
// 2 3
// 4 5 6
// 7 8 9 10

int main(){
    int n ;
    cin>>n ;     
    int r , c;
    int no = 0;
    for ( r = 0; r < n; r++)
    {
        for ( c = 0; c <= r; c++)
        {
           no++;
           cout<<no<<' ';
        }
        cout<<endl;
    }
    
    return 0;
}
