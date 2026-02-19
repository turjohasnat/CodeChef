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

        vector<ll> a(n+1);
        for(ll i = 0; i <= n; i++){
            cin >> a[i];
        }

        vector<ll> result;
        for(ll i = 0; i < n; i++){
            ll b = max(a[i], a[i+1]);
            result.push_back(b);
        }

        sort(result.begin(), result.end());      
        cout << result[0] << endl;
    }
        
    return 0;
}
