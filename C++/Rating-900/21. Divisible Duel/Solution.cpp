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
        ll x, y;
        cin >> x >> y;

        vector<ll> a;
        for(ll i = x; i <= y; i++){
            if(i % x == 0)
                a.push_back(i);
        }

        ll even = 0, odd = 0;
        for(auto i : a){
            if(i % 2 == 0)
                even += i;
            else
                odd += i;
        }

        if(even > odd)
            cout << "Yes" << el;
        else
            cout << "No" << el;
            
    }
    
    return 0;
}
