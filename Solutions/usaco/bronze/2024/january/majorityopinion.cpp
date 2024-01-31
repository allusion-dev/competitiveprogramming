#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define fileio freopen("file.in", "r", stdin); freopen("file.out", "w", stdout);
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define ve vector
#define vei vector<int>
#define dq deque
int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
		int n;
		set<int> s;
		cin >> n;
		vei v(n);
		for(int i = 0; i < n; i++){
			cin >> v[i];
		}
		v.push_back(0);
		for(int i = 0; i < v.size()-2; i++){
			if(v[i]==v[i+1] || v[i]==v[i+2]){
				s.insert(v[i]);
			}
		}
		if(s.empty() == false){
			for (const auto& element : s) {
  				cout << element; 
  				if (element != *s.rbegin()) {  
    				cout << " "; 
  				}
			}
			cout << "\n";
		}
		else{
			cout << -1 << "\n";
		}
	}
}
