#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> P;
typedef long long ll;
#define rep(i, n) for(int i=0;i<(n);i++)
#define rep2(i, m, n) for(int i=m;i<(n);i++)
#define rrep(i, n, m) for(int i=n;i>=(m);i--)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const ll MOD = 1000000007;
#ifdef __DEBUG

#include "cpp-pyprint/pyprint.h"

#endif

void Main() {
    vector<int> D(7);
    vector<int> J(7);
    for (int i = 0; i < 7; ++i) {
        cin >> D[i];
    }
    for (int j = 0; j < 7; ++j) {
        cin >> J[j];
    }
    int ans = 0;

    for (int k = 0; k < 7; ++k) {
        int d = D[k];
        int j = J[k];
        ans += max(d, j);
    }
    cout << ans << endl;

}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
}