#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

void reversechararray(char arr[],int n){
    int s =0,e=n-1;
    while (s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    cout<<arr;
}
void reversestring(string str){
    reverse(str.begin(),str.end());
    cout<<str;
}

int main(){
    char arr[]="helloworld";
    int n = strlen(arr);
    reversechararray(arr,n);
    
    cout<<endl;
    
    reversestring("hello world");
    return 0;
}