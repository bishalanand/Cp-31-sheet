#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        stack<int> ch;
        vector<int> colo(n, 0);

        int open = 0;
        int close = 0;
        int matched = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                ch.push(i);
                open++;
            }
            else {
                if (!ch.empty()) {
                    colo[ch.top()] = 1;
                    ch.pop();

                    colo[i] = 1;
                    matched++;
                }

                close++;
            }
        }

        if (open != close) {
            cout << -1 << endl;
            continue;
        }

        int unmatched = 0;

        for (int i = 0; i < n; i++) {
            if (colo[i] == 0) {
                unmatched++;
            }
        }

        // No unmatched characters -> entire string is already regular
        if (unmatched == 0) {
            cout << 1 << endl;

            for (int i = 0; i < n; i++) {
                colo[i] = 1;
            }
        }
        // No matched pair -> entire string is reverse of a regular sequence
        else if (matched == 0) {
            cout << 1 << endl;

            for (int i = 0; i < n; i++) {
                colo[i] = 1;
            }
        }
        // Both matched and unmatched parts exist -> need 2 colors
        else {
            cout << 2 << endl;

            for (int i = 0; i < n; i++) {
                if (colo[i] == 0) {
                    colo[i] = 2;
                }
            }
        }

        for (auto i : colo) {
            cout << i << " ";
        }
        cout << endl;
    }
}