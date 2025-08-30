#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector <int> arr, int tar, int st, int end){
    if (st<=end){
        int mid = st + (end - st) / 2;
        if(tar == arr[mid]){
            return mid;
        }
        else if (tar>arr[mid]){
            return binarysearch(arr, tar, mid+1, end);
        }
        else{
            return binarysearch(arr, tar, st, mid-1);
        }
    }
    return -1; // Element not found
}

int main(){
    vector <int> arr = {1, 2, 3, 4, 10, 6, 7, 8, 9};
    cout<<binarysearch(arr, 4,0, arr.size()-1);
    return 0;
}