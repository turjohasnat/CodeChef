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
        for(auto& i : a) cin >> i;
        
        ll x = 0;
        bool isOk = false;

        while(!isOk){
            bool d = false;
            bool e = false;

            for(ll i = 0; i < n; i++){
                if(a[i] < (c + x)){
                    d = true;
                    break;
                }
            }

            for(ll i = 0; i < n; i++){
                if(a[i] == c + x){
                    e = true;
                    break;
                }
            }

            if(d && !e)
                isOk = true;
            else
                x++;
        }

        cout << x << el;
        
    }
    
    return 0;
}
