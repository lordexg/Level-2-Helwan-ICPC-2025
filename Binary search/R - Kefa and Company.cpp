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
int32_t main() {
    FAST
    int n, d; cin >> n >> d;
    vector<pair<int,int>>v(n);
    int mx = 0;
    for(int i = 0; i < n; i++){
        int a,b; cin >> a >> b;
        mx = max(mx,b);
        v[i] = {a,b};
    }
    sort(all(v));
    int l = 0, r = 0;
    ll cnt = 0;
    ll ans = 0;
    while(r < n){
        // cout << l << " " << r << endl;
        
        if(v[r].first-v[l].first >= d){
            cnt-= v[l].second;
            l++;
            continue;
        }
        cnt+=v[r].second;
        ans = max(ans, cnt);
        r++;
    }
    cout << ans;
}