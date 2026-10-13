#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long k, x;
        cin >> k >> x;

        long long peak = k * (k + 1) / 2;

        if (x <= peak) {
            // Find minimum n such that n(n+1)/2 >= x
            long long n = (long long)((sqrt(1.0 + 8.0 * x) - 1) / 2);

            // Correct possible floating-point rounding
            while (n * (n + 1) / 2 < x)
                n++;

            while (n > 0 && (n - 1) * n / 2 >= x)
                n--;

            cout << n << '\n';
        }
        else {
            long long remaining = x - peak;

            // Find minimum d such that
            // d(2k-d-1)/2 >= remaining

            long long d = (long long)(
                ((2.0 * k - 1) -
                 sqrt((2.0 * k - 1) * (2.0 * k - 1)
                      - 8.0 * remaining)) / 2
            );

            // Correct rounding
            while (d * (2 * k - d - 1) / 2 < remaining)
                d++;

            while (d > 0 &&
                   (d - 1) * (2 * k - (d - 1) - 1) / 2 >= remaining)
                d--;

            cout << k + d << '\n';
        }
    }

    return 0;
}