#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
    // return true if p1 should come before p2, else return false

    // if we want to sort the vector according to the second element of the pair in descending order
    if(p1.second > p2.second){
        return true;
    }
    return false;
}

int main(){
    vector<int> v = {1, 4, 2, 5, 3};
    sort(v.begin(), v.end()); // sorts the vector in ascending order
    // v.begin() returns an iterator pointing to the first element of the vector, v.end() returns an iterator pointing to the last element of the vector
    // it tell the sort function to sort from the start to the end of the vector

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\n";

    vector<int> v1 = {3, 2, 6, 1, 7};
    sort(v1.begin(), v1.end(), greater<int>()); // sorts the vector in descending order

    // we can also sort a part of vector instead of the whole vector
    vector<int> v2 = {5, 2, 4, 1, 7};
    sort(v2.begin(), v2.begin()+3); // sorts the first 3 elements of the vector and leaves the rest as it is
    for(int i=0; i<v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << "\n";

    // we can also provide a costume compare function to the sort function
    vector<pair<int, int>> v3 = {{1, 2}, {3, 1}, {2, 3}};
    sort(v3.begin(), v3.end(), compare); // sorts the vector according to the compare function

    for(int i=0; i<v3.size(); i++){
        cout << v3[i].first << " " << v3[i].second << endl;
    }
    cout << "\n";
}