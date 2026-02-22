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

        vector<dou> a(n);
        for(auto& i : a)
            cin >> i;

        bool isScholarship = true;
        dou sum = 0;
        
        for(ll i = 0; i < n; i++){
            sum += a[i];

            dou avg = sum / (i + 1);
            if(avg < 40){
                isScholarship = false;
                break;
            }
        }

        if(isScholarship)
            cout << "Yes" << el;
        else
            cout << "No" << el;

    }
    
    return 0;
}
