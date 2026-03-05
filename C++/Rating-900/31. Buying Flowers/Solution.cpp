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

    while (t--){
        ll n;
        cin >> n;
        
        if(n == 2)
            cout << 4 << el;
        else if(n == 3)
            cout << 5 << el;
        else if(n % 3 == 0){
            ll result = (n / 3) * 5;
            cout << result << el;
        }
        else if(n % 3 == 2){
            ll a = n / 3;
            ll b = (n - (a * 3)) / 2;

            ll result = a * 5 + b * 4;
            cout << result << el;
        }
        else{
            ll a = n / 3 - 1;
            ll b = 2;

            ll result = a * 5 + b * 4;
            cout << result << el;
        }
    }
    
    return 0;
}
