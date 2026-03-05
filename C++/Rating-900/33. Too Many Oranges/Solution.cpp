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
        ll n, k;
        cin >> n >> k;

        ll result_1 = n * 10;
        ll result_2 = n * 12;

        if(result_1 <= k && result_2 >= k)
            cout << "Yes" << el;
        else
            cout << "No" << el;

    }
    
    return 0;
}
