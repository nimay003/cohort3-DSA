#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 15;

    for(int i = 0; i <= n; i++){
        if(i == 11){
            break;
        }
        if(i % 2 == 0){
            continue;
        }
        cout<<i<<" = Number is odd"<<endl;
    }
}