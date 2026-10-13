#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n, x;
        cin >> n >> x;

        vector<long long> a(n), b(n), c(n);

        long long num = 0;

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        for(int i = 0; i < n; i++) cin >> c[i];

        if(x == 0) {
            cout << "Yes" << endl;
            continue;
        }

        int i = 0;

        while(i < n && num != x) {
            if((x & a[i]) != a[i]) {
                break;
            }
            num |= a[i];
            i++;
        }

        i = 0;
        while(i < n && num != x) {
            if((x & b[i]) != b[i]) {
                break;
            }
            num |= b[i];
            i++;
        }

        i = 0;
        while(i < n && num != x) {
            if((x & c[i]) != c[i]) {
                break;
            }
            num |= c[i];
            i++;
        }

        if(num == x) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}