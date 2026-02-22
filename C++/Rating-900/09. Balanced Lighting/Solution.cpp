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

        vector<ll> c(n);
        for(auto& i : c)
            cin >> i;

        if(n % 2 != 0){
            cout << "No" << el;
            continue;
        }
        else{
            ll red = count(c.begin(), c.end(), 1);
            ll blue = count(c.begin(), c.end(), 2);

            if(red <= n/2 && blue <= n/2)
                cout << "Yes" << el;
            else
                cout << "No" << el;
        }
    }
    
    return 0;
}
