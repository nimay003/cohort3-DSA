#include<vector>
#include<iostream>

using namespace std;

int main(){
    int n;
    
    cout << "Enter number = ";
    cin >> n;

    vector<int> arr(n, 0);
    for(int i = 0; i < n; i++ ){
        cout << "Arrays numbers: " << arr[i] << endl;
    }

    vector<int> arr2;
    arr2.push_back(10);
    arr2.push_back(20);
    arr2.pop_back();
    for(int i = 0; i < arr2.size(); i++ ){
        cout << "Arrays 2 numbers: " << arr2[i] << endl;
    }
}