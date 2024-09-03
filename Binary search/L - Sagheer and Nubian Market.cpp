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

int n, s;
pair<int,ll> check(vector<int> arr,ll mid){
    ll sum = 0;
    vector<ll> b;
    for(ll i = 0;i < n;i++){
        b.push_back(arr[i] + (i+1)*mid);
    }
    sort(all(b));
    for(int i = 0; i < mid; i++){
        sum += b[i];
    }
    return {sum <= s, sum};
}

int32_t main() {
    FAST
    cin >> n >> s;
    vector<int>v(n); ini(v);
    
    int l = 0, r = n;
    int ans = 0;
    ll sum = 0;
    while(l<=r){
        ll mid = (l+r)>>1;
        
        pair<int,ll> ret = check(v,mid);
        
        if(ret.first){
            l = mid+1;
            sum = ret.second;
            ans = mid;
        }else{
            r = mid-1;
        }
    }
    cout << ans << " " << sum;
}