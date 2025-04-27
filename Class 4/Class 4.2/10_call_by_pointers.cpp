#include<bits/stdc++.h>

using namespace std;

void f(int *x, int *y) {
    *x = 10;
    *y = 20;
}

int main(){
    int a = 30;
    int b = 40;

    f(&a, &b);

    cout<<a<<" "<< b;
}