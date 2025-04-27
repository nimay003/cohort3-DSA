#include<bits/stdc++.h>

using namespace std;

int add(int a, int b){
    return a + b;
}

int add(int a, int b, int c){
    return a + b + c;
}

float add(float a, float b){
    return a + b;
}

string add(string a, string b){
    return a + b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout << add(1, 2) << endl;
    cout << add(1, 2, 3) << endl;
    cout << add(1.5f, 2.4f) << endl;
    cout << add("Hello, ", "World!") << endl;
}