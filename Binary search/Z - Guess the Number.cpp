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
    int l = 1, r = 1e6;
    string res;
    int ans;
    while(l<=r){
        int mid = (l+r)>>1;
        cout << mid << endl;
        cout.flush();
        cin >> res;
        if(res == ">="){
            ans = mid;
            l = mid+1;
        }else{
            r=mid-1;
        }
    }
    cout << "! " << ans;
}