#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5] = {2, 3, 4, 6, 9};
    vector<int> v = {1, 2,3, 4, 5};


    //reverse function
    reverse(a, a+5); // reverses the array
    reverse(v.begin(), v.end()); // reverses the vector

    cout << "reverse of array a: \n";
    for(int i=0; i<5; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "reverse of the vector v: \n";
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;


    //accumulate function
    int sum = accumulate(a, a+5, 0); // returns the sum of the array (third parameter is the initial value of sum)
    cout << "sum of array a: " << sum << endl;

    sum = accumulate(v.begin(), v.end(), 0); // returns the sum of the vector
    cout << "sum of vector v: " << sum << endl;

    // maximum and minimum element
    int mx = *max_element(a, a+5); // returns the maximum element of the array (it returns an iterator (pointer) pointing to the maximum element, so we have to dereference it to get the value)
    int mn = *min_element(v.begin(), v.end()); // returns the minimum element of the vector
    cout << "maximum element of array a: " << mx << endl;
    cout << "minimum element of array v: " << mn << endl;
}