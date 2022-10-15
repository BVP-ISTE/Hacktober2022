#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
void printSum(int arr[][4],int row,int col){
          cout<<"printing sum"<<endl;
           for ( int i = 0; i < 3; i++)
    {
        int sum = 0;
       for (int j = 0; j < 3; j++)
       {
      sum += arr[i][j];
       }
       cout<<sum<<" ";
    }
}
int main(){
    int arr[3][4];
    cout<<"enter your elements"<<endl;
    for ( int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
       cin>>arr[i][j];
       }
       
    }

    cout<<"printing the array"<<endl;
    
        for ( int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
       cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }
 cout << "enter the element to search" << endl;
    int target;
    cin >> target;
    if (isPresent(arr, target, 3, 3))
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
printSum(arr,3,3);
}