#include<bits/stdc++.h>

using namespace std;

int sum(int x, int y){
    return x + y;
}

void print_data(int x){
    cout<<"Number is : "<<x<<endl;
}

int find_max(int a, int b){
    if(a > b) return a;
    return b;
}

string concatenate(string a, string b){
    string res = "";
    for(char x : a) res.push_back(x);
    for(char y : b) res.push_back(y);
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    print_data(sum(10, 7));
    print_data(find_max(10, 7));
    cout<<concatenate("XYZ", "ABC");
}