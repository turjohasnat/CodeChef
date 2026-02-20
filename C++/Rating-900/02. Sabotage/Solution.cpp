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

    while (t--){
        ll n, x, k;
        cin >> n >> x >> k;

        vector<ll> a(n);
        for(auto& i : a)
            cin >> i;

        sort(a.rbegin(), a.rend());
        for (ll i = 0; i < k; i++){
            a[i] = 0;
            x += 100;
        }
        
        ll rank = 1;
        for(ll i = 0; i < n; i++){
            if(a[i] > x)
                rank++;
        }

        cout << rank << el;
    }
    
    return 0;
}
