#include <bits/stdc++.h>
using namespace std;
int a, b, c, d;
int main() {
  freopen("paint.in", "r", stdin);
  freopen("paint.out", "w", stdout);
  cin >> a >> b >> c >> d;
  if (b<c && a<c){
    cout << (b-a)+(d-c);
  }
  else if (c<a && d<a){
    cout << (d-c)+(b-a);
  }
  else if (a<c && b<d){
    cout << (d-a);
  }
  else if(c<a && b<d){
    cout << (d-c);
  }
  else if(c<a && d<b){
    cout << (b-c);
  }
  else if(a<c && d<b){
    cout << (b-a);
  }
  else if(a==c && b==d){
    cout << (d-c);
  }
  else if(a==c && b<d){
    cout << (d-c);
  }
  else if(a<c && b==d){
    cout << (d-a);
  }
}
