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

        vector<ll> a(n);
        for(auto& i : a)
            cin >> i;
        
        ll count_1 = count(a.begin(), a.end(), 1);
        ll count_2 = count(a.begin(), a.end(), 2);
        ll count_3 = count(a.begin(), a.end(), 3);

        ll ans = 0;
        ans += min(count_1, count_3);

        if(count_2 > 1)
            ans += count_2 - 1;
        
        cout << ans << el;
    }
    
    return 0;
}
