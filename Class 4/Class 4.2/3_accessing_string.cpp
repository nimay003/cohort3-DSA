#include<bits/stdc++.h>

using namespace std;

int main() {
    string s = "My name is Nimay";

    for(int i = 0; i < s.length(); i++) {
        cout << s[i];
    }
    cout << endl;
    
    for(char x: s) {
        cout << x << " ";
    }
}