#include <iostream>
using namespace std;

void insertionsort(int arr[],int n){
    for(int i =1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while (prev >=0 && arr[prev]>curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Unsorted array: ";
    printArray(arr, n);
    insertionsort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}