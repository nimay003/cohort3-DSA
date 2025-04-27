#include<bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int x = 10;

  if(x > 0){
    cout<<"X is positive"<<endl;
    if(x < 10){
        cout<<"X is smaller than 10"<<endl;
    } else{
        cout<<"X is greater than 10"<<endl;
    }
  } else {
    cout<<"x is negative"<<endl;
  }
}