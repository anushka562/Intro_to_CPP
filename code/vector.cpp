#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a; // declaring a vector of integers (initially empty)
    vector<int> b(5, 0); // declaring a vector of integers of size 5 and initializing all elements to 0

    cout << "size of vector a: " << a.size() << endl; // gives the size of the vector
    cout << "size of vector b: " << b.size() << endl;

    a.push_back(10); // adds an element to the end of the vector
    a.push_back(20);
    cout << "size of vector a: " << a.size() << endl; // the size of the vector has increased to 2

    a.pop_back(); // removes the last element of the vector
    cout << "size of vector a: " << a.size() << endl; // the size of the vector has decreased to 1

    b.resize(10); // resizes the vector to size 10 and initializes all new elements to 0
    cout << "size of vector b: " << b.size() << endl;

    // we can traverse the vector using a for loop and access each element using their index
    for(int i = 0; i < b.size(); i++){
        cout << b[i] << " ";
    }
    cout << endl;

    // shorthand to traverse the containers using for loop
    for(int i: b){
        cout << i << " ";
    }
    cout << endl;

    //vector of vectors (2d vector)
    vector<vector<int>> v2d(5, vector<int>(5, 0)); // declaring a 2d vector of size 5x5 and initializing all elements to 0.
    
    // tranvering a 2d vector
    for(int i=0; i<v2d.size(); i++){
        for(int j=0; j<v2d[i].size(); j++){
            cout << v2d[i][j] << " ";
        }
        cout << endl;
    }

    // we have more function like .insert(), .erase(), etc. which can be used to insert and erase elements from the vector
}