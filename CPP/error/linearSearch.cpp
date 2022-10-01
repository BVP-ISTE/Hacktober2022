 
 #include<iostream>
using namespace std;
 
 int linearSearch(int arr[],int n,int key){
       for (int i = 0; i < n; i++)
       {
            if (arr[i]==key)
            {
            return 0;
            }

      }
     return -1;
}

int main(){
      cout<<"enter number of elements"<<endl;
      int n;
      cin>>n;
      int arr[n];
      cout<<"array is"<<endl;
      for (int i = 0; i < n; i++)
      {

            cin>>arr[i];
      }
cout<<"enter your key"<<endl;
      int key;
      cin>>key;
cout<<linearSearch(arr,n,key)<<endl;
}

