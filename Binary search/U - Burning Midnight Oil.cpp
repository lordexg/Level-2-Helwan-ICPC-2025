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
//vector<int> freq(1e5+10);
int n, k;
bool check(int mid){
    int sum = mid;
    while(mid > 0){
        sum+= mid/k;
        mid /= k; 
    }
    return sum >= n;
}
int32_t main() {
    Im_cooked
    cin >> n >> k;
    int l = 0, r = n;
    int res = 0;
    while(l<=r){
        int mid = (l+r)>>1;
        
        if(check(mid)){
            res = mid;
            r = mid-1;
        }else{
            l=mid+1;
        }
    }
    cout << res;
}