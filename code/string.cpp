#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; //string here is like anyother datatype like int, double, etc. (we don't need to use arrays of char which can be a bit tedious)
    cin >> s;

    int len = s.size(); // gives the length of the string
    cout << len << endl;

    string s1 = "Hello";
    string s2 = s1 + " World"; // we can concatenate strings using the + operator
    cout << s2 << endl;

    // we can traverse the string using a for loop and access each character using their index
    for(int i = 0; i < len; i++){
        cout << s[i];
    }
    cout << "\n";

    // we can directly compare 2 strings using the == operator
    if(s2 == "Hello World"){
        cout << "strings are equal\n";
    }

    // there are also other functions like .substr() which can be used to extract a substring from a string, etc
}