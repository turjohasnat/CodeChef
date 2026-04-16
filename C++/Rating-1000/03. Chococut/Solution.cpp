//C++ Solution:
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dou;

#define el "\n"
#define PI (2.0 * acos(0.0))

inline int ceil(int a, int b){
return (a + b - 1) / b;
}
inline int abs (int a, int b){
int d1 = a - b;
if (d1 < 0) d1 *= -1;
return d1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n, m, k;
        cin >> n >> m >> k;

        ll total = n * m;

        ll ans = 0;
        if(k == 0){
            cout << total << el;
            continue;
        }

        for(ll i = 1; i < n; i++){
            ll a = i * m;
            ll b = total - a;

            if(k <= a)
                ans = max(b, ans);
            
            if(k <= b)
                ans = max(a, ans);
        }

        for(ll i = 1; i < m; i++){
            ll a = i * n;
            ll b = total - a;

            if(k <= a)
                ans = max(b, ans);
            
            if(k <= b)
                ans = max(a, ans);
        }

        cout << ans << el;
    }

    return 0;
}
