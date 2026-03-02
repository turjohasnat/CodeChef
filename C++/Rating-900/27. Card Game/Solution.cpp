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
        ll n, x;
        cin >> n >> x;

        ll even_card = n / 2;
        ll odd_card = (n + 1) / 2;

        if(x % 2 == 0)
            cout << even_card - 1 << el;
        else
            cout << odd_card - 1 << el;

    }
    
    return 0;
}
