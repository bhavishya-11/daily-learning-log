#include <iostream>
#include <string>
using namespace std;

int main(){
    string str ="hello world";
    cout<<str<<endl;
    
    //concatenation
    string str1 ="bhavishya";
    string str2 = "chauhan";
    string str3 = str1 + " " + str2;
    cout<<str3<<endl;

    //length
    cout<<str.length()<<endl;
    
    //input
    string str4;
    cin>>str4; // Input a string (no spaces)

    getline(cin,str4); // Input a string with spaces
    cout<<str4<<endl; // Output the string
    return 0;
}