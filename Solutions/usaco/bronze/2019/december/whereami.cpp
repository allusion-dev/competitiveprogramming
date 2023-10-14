#include <iostream>
#include <string>
#include <set>
using namespace std;

int N;
string S;

bool dups(int len){
  set<string> X;
  for (int i=0; i<=N-len; i++) {
    if (X.count(S.substr(i,len)) > 0) return true;
    X.insert(S.substr(i,len));
  }
  return false;
}

int main(){
  freopen("whereami.in", "r", stdin);
  freopen("whereami.out", "w", stdout);
  cin >> N >> S;
  int ans = 1;
  while (dups(ans)) ans++;
  cout << ans << "\n";
  return 0;
}
