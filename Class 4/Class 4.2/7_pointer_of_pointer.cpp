#include<bits/stdc++.h>

using namespace std;

int main(){
    int x = 10;
    int *ptr = &x; // ptr stores address of x
    int **ptr1 = &ptr; // ptr1 stores address of ptr
    cout << *ptr1 << endl; // Prints address of x
    cout << **ptr1 << endl; // Prints value of x
}