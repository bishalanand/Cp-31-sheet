#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        unordered_set<int> elements;
        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
            elements.insert(num);
        }
        if(elements.size() < n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}