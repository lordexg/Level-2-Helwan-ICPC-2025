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
#define Im_cooked ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
bool check(vector<int>a, vector<int>b, ll mid, int k){
    // can I make [mid] cookies?
    int n = a.size();
    for(int i = 0; i < n; i++){
        // لو الهحتاجه اكتر من المعايا هضيف باودر على المعايا
        ll need = a[i]*mid;
        if(need > b[i]){
            if(need-b[i] <= k){
                k-= (need-b[i]);
            }else{
                return 0;
            }
        }
    }
    return 1;
}
int32_t main() {
    Im_cooked
    int n, k; cin >> n >> k;
    vector<int>a(n); ini(a);
    vector<int>b(n); ini(b);
    ll l = 0, r = 1e10;
    int ans = 0;
    while(l<=r){
        ll mid = (l+r)/2;
        if(check(a, b, mid, k)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    cout << ans;
}