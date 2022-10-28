#include <iostream>
using namespace std;

void heapSort(int arr[], int n) {
    // Write your code
    for(int i = 1; i < n; i++) {
        int childIndex = i;
        while(childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;

            if(arr[childIndex] < arr[parentIndex]) {
                int temp = arr[childIndex];
                arr[childIndex] = arr[parentIndex];
                arr[parentIndex] = temp;
            } else {
                break;
            }
            childIndex = parentIndex;
        }
    }
    // Remove elements
    int size = n;
    while(size > 1) {
        int temp = arr[0];
        arr[0] = arr[size - 1];
        arr[size-1] = temp;
        size--;
        int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndx = 2 * parentIndex + 2;
        while(leftChildIndex < size) {
            int minIndex = parentIndex;
            if(arr[minIndex] > arr[leftChildIndex]) {
                minIndex = leftChildIndex;
            }
            if(rightChildIndx < size && arr[rightChildIndx] < arr[minIndex]) {
                minIndex = rightChildIndx;
            }
            if(minIndex == parentIndex) {
                break;
            }
            int temp = arr[minIndex];
            arr[minIndex] = arr[parentIndex];
            arr[parentIndex] = temp;
            
            parentIndex = minIndex;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndx = 2 * parentIndex + 2;
        }
    }
}



int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    } 

    heapSort(input, size);

    for (int i = 0; i < size; i++) {
        cout << input[i] << " ";
    } 

    delete[] input;
}
