#include <iostream>
#include <vector>
using namespace std;

bool isarraysorted(vector<int> arr, int n){ // function to check if array is sorted in ascending order
    if (n ==0 || n ==1){
        return true; // Base case: an array of size 0 or 1 is sorted
    }

    return arr[n-1]>=arr[n-2] && isarraysorted(arr, n-1);
}
int main(){
    vector <int> arr1 = {1,2,3,4,5};
    vector <int> arr2 = {1,2,8,4,5};
    cout << isarraysorted(arr1, arr1.size())<<endl;
    cout << isarraysorted(arr2, arr2.size())<<endl;
    return 0;
}