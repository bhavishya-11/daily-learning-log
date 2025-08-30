#include <iostream>
using namespace std;

void selectionsort(int arr[],int n){
    for (int i = 0; i<n-1;i++){
        int minindex = i;
        for(int j =i+1;j<n;j++){
            if (arr[j]<arr[minindex]){
                minindex = j;
            }
        }
        swap(arr[i],arr[minindex]);
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
    selectionsort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}