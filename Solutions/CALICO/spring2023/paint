#include <bits/stdc++.h>
using namespace std;
int solve(int W, int O, int B, int Cow, int Cbo, int Cbw) {
  int atw1 = O*Cow + B*Cbw;
  int atb1 = O*Cbo + W*Cbw;
  int ato1 = W*Cow + B*Cbo;
  int atw2_1 = B*Cbo + (O+B)*Cow;
  int atw2_2 = O*Cbo + (O+B)*Cbw;
  int atb2_1 = O*Cow + (W+O)*Cbw;
  int atb2_2 = W*Cow + (W+O)*Cbo;
  int ato2_1 = B*Cbw + (B+W)*Cow;
  int ato2_2 = W*Cbw + (B+W)*Cbo;
  int minconversioncost = min({atw1,atb1,ato1,atw2_1,atw2_2,atb2_1,atb2_2,ato2_1,ato2_2});
  return minconversioncost;
}
int main() {
  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    int W, O, B, Cow, Cbo, Cbw;
    cin >> W >> O >> B >> Cow >> Cbo >> Cbw;
    cout << solve(W, O, B, Cow, Cbo, Cbw) << '\n';
  }
}
