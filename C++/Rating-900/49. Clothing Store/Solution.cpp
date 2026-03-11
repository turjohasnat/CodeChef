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
        ll x, y, z, a, b, c;
        cin >> x >> y >> z >> a >> b >> c;

        ll happy = 0;
        if(c >= z)
            happy += z;
        else{
            happy += c;

            z -= c;
            y += z;
        }

        if(b >= y)
            happy += y;
        else{
            happy += b;

            y -= b;
            x += y;
        }

        if(a >= x)
            happy += x;
        else
            happy += a;

        cout << happy << el;
    }
    
    return 0;
}
