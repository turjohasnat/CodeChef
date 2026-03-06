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
        ll n, c;
        cin >> n >> c;

        vector<ll> a(n);
        for(auto& i : a)
            cin >> i;

        string s;
        cin >> s;

        ll sum_total = 0, normal_sum = 0;
        for(ll i = 0; i < n; i++){
            if(s[i] == '0') normal_sum += a[i];
            sum_total += a[i];
        }

        if(normal_sum >= c){
            ll result = max(normal_sum, sum_total - c);
            cout << result << el;
        }
        else
            cout << normal_sum << el;
            
    }
    
    return 0;
}
