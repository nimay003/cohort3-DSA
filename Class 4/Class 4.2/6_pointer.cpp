#include<bits/stdc++.h>

using namespace std;

int main(){
    int x = 10; // We define an integer variable. It gets assigned 4 bytes in stack memory
    int *ptr1 = &x; // We create a pointer on variable x. The pointer (ptr) stores the address of x 

    cout << ptr1 << endl;
    cout << *ptr1 << endl;

    float y = 20.7;
    float *ptr2 = &y;
    cout << ptr2 << endl;
}