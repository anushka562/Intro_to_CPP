#include <bits/stdc++.h>
using namespace std;

int main(){
    // lower bound and upper bound are used to find the index of an element in a sorted array/vectors
    // lower bound of an element returns the first element that is not less than the given element
    // upper bound of an element returns the first element that is greater than the given element

    int a[5] = {2, 3, 4, 6, 9};
    vector<int> v = {1, 2,3, 4, 5};

    // lower bound
    int x;
    cin >> x;
    int lb = lower_bound(a, a+5, x) - a; // returns the index of the lower bound of x in the array
    cout << "lower bound of " << x << " in array a: " << a[lb] << " occuring at index " << lb << endl;

    lb = lower_bound(v.begin(), v.end(), x) - v.begin(); // returns the index of the lower bound of x in the vector
    cout << "lower bound of " << x << " in vector v: " << v[lb] << " occuring at index " << lb << endl;

    // upper bound
    int ub = upper_bound(a, a+5, x) - a; // returns the index of the upper bound of x in the array
    cout << "upper bound of " << x << " in array a: " << a[ub] << " occuring at index " << ub << endl;
    
    ub = upper_bound(v.begin(), v.end(), x) - v.begin(); // returns the index of the upper bound of x in the vector
    cout << "upper bound of " << x << " in vector v: " << v[ub] << " occuring at index " << ub << endl;

    // lower bound and upper bound for sets
    set<int> s = {1, 2, 3, 4, 5};
    auto it = s.lower_bound(x); // returns an iterator pointing to the lower bound of 3 in the set
    cout << "lower bound of x in set s: " << *it << endl;

    it = s.upper_bound(x); // returns an iterator pointing to the upper bound of 3 in the set
    cout << "upper bound of x in set s: " << *it << endl;

}