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
        ll n, m;
        cin >> n >> m;

        vector<ll> a(n);
        for(auto& i : a)
            cin >> i;

        vector<ll> b(m);
        for(auto& i : b)
            cin >> i;

        ll total_cakes = 0;
        for(ll i = 0; i < m; i++){
            for(ll j = 0; j < n; j++){
                if(b[i] < a[j])
                    total_cakes++;
            }
        }

        cout << total_cakes << el;
    }
    
    return 0;
}
