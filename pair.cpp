#include <bits/stdc++.h>
using namespace std;

int main(){
    // pairs are used to store 2 values (can have different datatype) together, (we can use struct for this but pairs are easier alternative)
    pair<int, int> p1; // declaring a pair of integers (initially empty)
    pair<int, string> p2(1, "Hello"); // declaring a pair of integer and string and initializing them
    p1 = make_pair(2, 3); // assigning values to the pair

    pair<int, int> p3 = {4, 5}; // another way to assign value to a pair
    cout << p1.first << " " << p1.second << endl; // accessing the first and second element of the pair
    cout << p2.first << " " << p2.second << endl;

    pair<int, pair<int, int>> p4 = {1, {2, 3}}; // declaring a pair of pair of integers and initializing them
    cout << p4.first << " " << p4.second.first << " " << p4.second.second << endl; 
}