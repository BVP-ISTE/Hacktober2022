#include <iostream>
using namespace std;

int binarySearch(int *input, int n, int val)
{
    int start,end,mid;
    start=0;
    end=n-1;


    while(start<=end){
        mid=(start+end)/2;
        if(input[mid]==val){
            return mid;
        }
        else if(val<input[mid]){
            end = mid - 1;
        }
        else{
            start=mid+1;
        }

    }
    return -1;

}

int main()
{

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
		int val;
    cout<<"Enter the value to be searched: ";
	cin >> val;
	int index =	binarySearch(input, size, val);
    if(index == -1){
      cout<< val <<" is not present in the array";
   }
   else{
      cout<< val <<" is present at index "<< index <<" in the array";
   }

	return 0;
}//Binary Search