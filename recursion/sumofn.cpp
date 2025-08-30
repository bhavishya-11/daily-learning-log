#include <iostream>
using namespace std;

int sumofn(int n){
    if (n==1){
        return 1;
    }
    return n + sumofn(n-1);
}

int main(){
    cout<<sumofn(4);
    return 0;
}