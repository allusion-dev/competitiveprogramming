#include <bits/stdc++.h>
using namespace std;
vector<int> a;
vector<string> ans;
int t, n, k;
int main() {
  cin >> t;
  for(int i = 0; i < t; i++){
    cin >> n >> k;
    for (int j = 0; j < n; j++){
      int e;
      cin >> e;
      a.push_back(e);
    }
    if(find(a.begin(),a.end(), k) != a.end()){
      ans.push_back("YES");
    }
    else if(find(a.begin(),a.end(), k) == a.end()){
      ans.push_back("NO");
    }
    a.clear();
  }
  for(int i = 0; i < ans.size(); i++){
    cout << ans[i] << endl;
  }
}