#include <iostream>
#include <string.h> // For strlen
using namespace std;

int main(){
    char str[] = {'a','b','c','d','e','\0'}; // Character array (C-style string)
    cout<<strlen(str)<<endl; // Output the length of the string - 5
    
    char str2[]="hello";
    
    int len =0;
    for(int i =0;i<str[i]!='\0';i++){
        len++;
    }
    cout<<len<<endl; // Output the length of the string - 5

    //input
    cin>>str; // Input a string (no spaces)
    cout<<str<<endl; // Output the string

    cin.getline(str,12); // Input a string with spaces (up to 11 characters + null terminator)
    cout<<str<<endl; // Output the string

    cin.getline(str,20,'$'); // Input a string with spaces until '$' is encountered (up to 19 characters + null terminator)
    cout<<str<<endl; // Output the string
    
    return 0;
}