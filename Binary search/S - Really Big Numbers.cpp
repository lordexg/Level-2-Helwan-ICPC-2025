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
ll n, s; 
bool check(ll mid){
    ll temp = mid;
    ll sum = 0;
    while(temp){
        sum += temp%10;
        temp /= 10;
    }
    // cout << mid << " " << sum << endl;
    return mid-sum >= s;
}
int32_t main() {
    FAST
    cin >> n >> s;
    ll l = 0, r = n;
    ll ans = 0;
    while(l<=r){
        ll mid = (l+r)>>1;
        if(check(mid)){
            ans = mid;
            r = mid-1;
        }else{
            l = mid + 1;
        }
    }
    cout << (ans?n-ans+1:ans);
}
