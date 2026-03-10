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
bool comp(int a, int b) {
return a > b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n = 5;
        vector<ll> a(n);

        ll total = 0;
        for(auto& i : a){
            cin >> i;
            total += i;
        }
        
        ll coins = 0;
        if(total >= 35)
            cout << 0 << el;
        else{
            ll b = 35 - total;

            sort(a.begin(), a.end());
            for(ll i = 0; i < 5; i++){
                ll c = 10 - a[i];
                coins++;

                b -= c;
                if(b <= 0)
                    break;
            }

            cout << coins * 100 << el;
        }
    }

    return 0;
}
