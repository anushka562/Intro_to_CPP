#include <bits/stdc++.h>
using namespace std;

int main(){
    // sets are used to store unique elements in sorted order
    set<int> s; // declaring a set of integers (initially empty)
    s.insert(1); // inserting elements in the set
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(5); // inserting duplicate elements in the set (it will be ignored)
    s.insert(6);

    cout << "set s: \n";
    for(int i: s){ // iterating over the set
        cout << i << " ";
    }
    cout << endl;

    cout << "size of set s: " << s.size() << endl; // size of the set
    cout << "is set s empty? " << s.empty() << endl; // returns 1 if the set is empty, else returns 0

    s.erase(3); // erasing an element from the set
    cout << "set s after erasing 3: \n";
    for(int i: s){
        cout << i << " ";
    }
    cout << endl;

    s.clear(); // clears the set
    cout << "set s after clearing: \n";
    for(int i: s){
        cout << i << " ";
    }
    cout << endl;

    // multiset is similar to set but it can contain duplicate elements
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(5);
    ms.insert(5);
    ms.insert(6);

    cout << "multiset ms: \n";
    for(auto it=ms.begin(); it!=ms.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    cout << "size of multiset ms: " << ms.size() << endl;
    cout << "is multiset ms empty? " << ms.empty() << endl;

    ms.erase(5);
    cout << "multiset ms after erasing 5: \n";
    for(auto it=ms.begin(); it!=ms.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    ms.clear();

    // to find a element is set/multiset we use .find() function which return the iterator pointing to the element if it is present in the set/multiset, else it returns the iterator pointing to the end of the set/multiset (i.e. .end())
    if(ms.find(5) == ms.end()){
        cout << "5 is not present in the multiset ms\n";
    }
    else{
        cout << "5 is present in the multiset ms\n";
    }
}