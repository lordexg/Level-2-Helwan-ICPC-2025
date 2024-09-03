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
        int n, k; cin >> n >> k;
        vector<ll>v(n+1), max_dif(n+1);
        for(int i = 1; i <= n ;i++){
            cin >> v[i];
            max_dif[i] = max(max_dif[i-1],v[i]);
            v[i] += v[i-1]; // height of each step
        };
        // cout << "max "; print(v);
        // cout << "sorted "; print(max_dif);
        while(k--){
            int x; cin >> x;
            cout << v[upper_bound(all(max_dif),x)-max_dif.begin()-1] << " ";
        }
        cout << endl;
    }
}