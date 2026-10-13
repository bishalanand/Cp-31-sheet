#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> grid(n);

        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }

        int ans = 0;

        for (int i = 0; i < n / 2; i++) {
            for (int j = 0; j < (n + 1) / 2; j++) {

                int c0 = 0, c1 = 0;

                char a = grid[i][j];
                char b = grid[j][n - 1 - i];
                char c = grid[n - 1 - i][n - 1 - j];
                char d = grid[n - 1 - j][i];

                if (a == '0') c0++; else c1++;
                if (b == '0') c0++; else c1++;
                if (c == '0') c0++; else c1++;
                if (d == '0') c0++; else c1++;

                ans += min(c0, c1);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}