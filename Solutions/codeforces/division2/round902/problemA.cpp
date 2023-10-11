//Codeforces Round 902 (Div. 2) Problem A. Goals of Victory
#include <bits/stdc++.h>
using namespace std;
vector<int> t;
int x;
int n;
int v;
int main(){
  cin >> n;
  for (int i=0; i < n;i++){
    int e;
    cin >> e;
    for (int j=0;j < e-1;j++){
      int r;
      cin >> r;
      x += r;
    }
    x *= -1;
    t.push_back(x);
    x -= x;
  }
  for (int i=0; i<n;i++){
    cout << t[i] << endl;
  }
}
