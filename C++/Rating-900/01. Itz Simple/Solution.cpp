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
        ll n, k, p;
        cin >> n >> k >> p;

        vector<ll> a(n);
        for(auto& i : a)
            cin >> i;

        ll ved = k;
        sort(a.rbegin(), a.rend());
        ved += a[0];

        ll varun = p;
        for(ll i = 1; i < n; i++)
            varun += a[i];

        if(ved > varun)
            cout << "Ved" << el;
        else if(ved < varun)
            cout << "Varun" << el;
        else
            cout << "Equal" << el;

    }
    
    return 0;
}
