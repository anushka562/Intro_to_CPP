#include <bits/stdc++.h>
using namespace std;

int main(){
    // unsyncs the cin and cout
    ios_base::sync_with_stdio(false); // to make cin and cout faster
    cin.tie(NULL); 

    int a;
    double b;

    // we don't need the %d, %lf flags here
    cin >> a >> b; // to take input
    cout << a << " " << b << endl; // to print output
    // endl does the same thing as "\n" but it also flushes the stream
}