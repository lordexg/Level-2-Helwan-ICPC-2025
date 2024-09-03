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
int n, k;
bool check(vector<ll> v, double mid){
    double before_mid = 0;
    double after_mid = 0; 
    for(int i = 0 ; i < n; i++){
        if(v[i]>mid){
            before_mid += (v[i]-mid)-((v[i]-mid)*k/100);
        }else{
            after_mid += mid-v[i];
        }
    }
    return before_mid >= after_mid;
}
// I HOPE this to work WALLAH
int32_t main() {
    FAST
    cin >> n >> k;
    vector<ll>v(n); inl(v);
    sort(allr(v));
    double l = 0, r = 1000;
    double ans = 0;
    while(fabs(r-l) > 1e-6){
        double mid = (l+r)/2;
        
        if(check(v,mid)){
            ans = mid;
            l = mid;
        }else r = mid;
    }
    cout << fixed << setprecision(9) << ans;
}