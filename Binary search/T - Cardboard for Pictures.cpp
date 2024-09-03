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
bool check(vector<ll>v, ll c, ll mid){
    ll sum = 0;
    ll double_mid = 2*mid;
    for(int i = 0; i < v.size(); i++){
        sum += (v[i] + double_mid) * (v[i] + double_mid);
        if(sum>c)break;
    }
    return c >= sum;
}
int32_t main() {
    FAST
    int t; cin >> t;
    while(t--){
        ll n, c; cin >> n >> c;
        vector<ll>v(n); inl(v);
        
        ll l = 0, r = 1e9, ans = 0;
        while(l <= r){
            // cout << l << " " << r << endl;
            ll mid = (l+r)/2;
            if(check(v, c, mid)){
                ans = mid;
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
}