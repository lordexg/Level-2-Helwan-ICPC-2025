#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb(x) push_back(x);
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define ini(arr) for(int &i : arr) cin >> i;
#define inl(arr) for(ll &i : arr) cin >> i;
#define print(arr) for(ll i : arr) cout << i << " "; cout << endl;
ll MOD = 1e9+7;
using namespace std;
#define FAST ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int n, m, x, y, q; 
bool check(ll xx, ll yy, ll mid){
    ll x_steps = (x+ xx*mid); 
    ll y_steps = (y+ yy*mid); 
    return x_steps > 0 && x_steps <= n && y_steps>0 && y_steps <= m;
}
int32_t main() {
    FAST
    cin >> n >> m >> x >> y >> q;
    ll res = 0;
    while(q--){
        int xx,yy;
        cin >> xx >> yy;
        ll l = 0, r = 1e9, ans = 0;
        while(l <= r){
            ll mid = (l+r)/2;
            if(check(xx, yy, mid)){
                ans = mid;
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        x = xx*ans+x;
        y = yy*ans+y;
        res+= ans;
    }
    cout << res;
}