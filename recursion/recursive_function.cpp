#include <iostream>
using namespace std;

void printnos(int n){ //basic recursive function
    if (n == 1){
        cout<<1;
        return;
    }
    cout << n <<" ";
    printnos(n-1);
}

int main(){
    printnos(100);
    return 0;
}