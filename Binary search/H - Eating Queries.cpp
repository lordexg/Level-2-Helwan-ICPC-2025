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
    int t; cin >> t;
    while(t--){
        int n, q; cin >> n >> q;
        vector<int>v(n); ini(v);
        sort(allr(v)); 
        for(int i = 1;i < n;i++)v[i] += v[i-1];
        while(q--){
            int x; cin >> x;
            if(x>v[n-1]){
                cout << -1 << endl;
                continue;
            }
            cout << lower_bound(all(v),x)-v.begin()+1 << endl;
        }
    }
}