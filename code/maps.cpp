#include <bits/stdc++.h>
using namespace std;

int main(){
    // maps are used to store key-value pairs (keys are unique)
    map<string, int> m; // declaring a map of integers (initially empty)
    m["two"] = 2; // assigning value to the key two
    m["three"] = 3; // assigning value to the key three
    m["four"] = 4; // assigning value to the key four
    m["five"] = 5; // assigning value to the key five
    m["six"] = 6; // assigning value to the key six

    cout << m["two"] << endl; // accessing the value of the key two
    cout << m["three"] << endl; // accessing the value of the key three
    cout << m["four"] << endl; // accessing the value of the key four
    cout << m["five"] << endl; // accessing the value of the key five
    cout << m["six"] << endl; // accessing the value of the key six

    // to check if a key is present in the map
    if(m.find("one") != m.end()){ // .find() return the iterator pointing to the key-value pair corresponding to the key, if the key is not present in the map then it returns the iterator pointing to the end of the map (m.end())
        cout << "key one is present\n";
    }
    else{
        cout << "key one is not present\n";
    }

    // to iterate over the map
    for(pair<string, int> i: m){
        cout << i.first << " " << i.second << endl;
    }

    // to erase a key from the map
    m.erase("two"); // erases the key two from the map

    
}