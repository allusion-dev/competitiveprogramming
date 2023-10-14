//Codeforces Round 900 (Div. 3) Problem B. Aleksa and Stack
#include <bits/stdc++.h>
using namespace std;
int t, n; 
int main(){
  cin >> t;
  for (int i=0; i < t;i++){
    cin >> n;
    for (int j=0; j < n; j++){
      cout << (2*j+1) << "\n"[i+1==n];
    }
  }
}
