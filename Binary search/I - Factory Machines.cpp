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
int n, t;
bool check(vector<ll> v, ll mid){
    ll sum = 0;
    for(int i = 0 ; i < n; i++){
        sum += mid/v[i];
        if(sum>t)break; // maybe
    }
    return sum >= t;
}
int32_t main() {
    FAST
    cin >> n >> t;
    vector<ll>v(n); inl(v);
    sort(all(v));
    ll l = 0, r = 1e19;
    ll ans = 0;
    while(l<=r){
        ll mid = (l+r)>>1;
        
        if(check(v,mid)){
            ans = mid;
            r = mid-1;
        }else l=mid+1;
    }
    cout << ans;
}