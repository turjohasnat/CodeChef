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
        ll n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        ll cnt_0 = 0, ans = 0;
        for(ll i = 0; i <= n; i++){
            ll cnt_1 = n - cnt_0;
            
            ll total = cnt_0 * a + cnt_1 * b;
            if(c >= d)
                total = total + cnt_0 * cnt_1 * c;
            else
                total = total + cnt_0 * cnt_1 * d;

            ans = max(ans, total);
            cnt_0++;
        }

        cout << ans << el;
    }

    return 0;
}
