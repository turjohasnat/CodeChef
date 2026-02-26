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
        ll n;
        cin >> n;

        vector<ll> a(n), b(n);
        for(auto& i : a) cin >> i;
        for(auto& i : b) cin >> i;

        vector<ll> possible_L = {0};
        for(ll i = 0; i < n; i++)
            possible_L.push_back(b[i]);

        ll max_satisfaction = 0;
        for(auto L : possible_L){
            ll s = 0;
            for(ll j = 0; j < n; j++){
                if(b[j] <= L && a[j] > 0)
                    s += a[j];
            }

            ll satisfaction = s - L;
            max_satisfaction = max(max_satisfaction, satisfaction);
        }

        cout << max_satisfaction << el;
    }
    
    return 0;
}
