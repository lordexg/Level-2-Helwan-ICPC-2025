#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pll pair<ll,ll>;
#define pii pair<int,int>;
#define pb(x) push_back(x);
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define ini(arr) for(int &i : arr) cin >> i;
#define inl(arr) for(ll &i : arr) cin >> i;
#define print(arr) for(ll i : arr) cout << i << " "; cout << endl;
ll MOD = 1e9+7;
using namespace std;
#define FAST ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int32_t main() {
    FAST
    int n; cin >> n;
    vector<int>v(n);ini(v);
    sort(all(v));
    if(n == 1){
        cout << 1;
        return 0;
    }
    ll max_dif = 0;
    int res = 0;
    int l = 0, r = 1;
    while(r < n){
        max_dif += (v[r]-v[r-1]);
        if(max_dif > 5){
            l++;
            max_dif -= (v[l]-v[l-1]);
        }
        res = max(res,r-l+1);
        r++;
    }
    cout << res;
}