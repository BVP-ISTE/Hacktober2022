// Given an array find the number which comes with maximum frequency. It must work in O(n) time complexity.
// TIP:- try to use hashmap for better time complexity
// input an array and in the output print the max occurred freq number
#include <iostream>
using namespace std ; 
int max_Frequency(int * arr ,int n ){
  int f = 0 ; 
  int count = 1 ; 
  for ( int i = 1 ; i < n ; i++ ){
    if (arr[i] == arr[f] ){
      count ++ ; 
    } else {
      count-- ; 
    }
    if (count == 0 ){
      f = i ; 
      count = 1 ; 
    }
  }
  return arr[f] ; 
}

int main (){
  int arr[] = {7,2,9,1,7,8,7,10,3,7} ; 
  int n = sizeof(arr)/sizeof(int) ; 
  int frequency = max_Frequency(arr,n) ; 
  int count = 0 ; 
  for (int i = 0 ; i < n ; i++ ){
    if(arr[i] == frequency ){
      count++ ; 
    }
  }
  cout << "Number " << max_Frequency (arr,n) << " occurred " << count << " times " << endl ; 
  return 0 ; 
}
  
