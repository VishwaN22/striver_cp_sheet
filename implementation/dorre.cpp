#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T-- > 0) {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;

        // Check if t contains adjacent characters that are the same
        bool isGoodT = true;
        for (int k = 1; k < m; k++) {
            if (t[k] == t[k - 1]) {
                isGoodT = false;
                break;
            }
        }

        bool isGoodS = true;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                if (s[i - 1] != t[0] && s[i] != t[m - 1]) {
                    isGoodS = false;
                    break;
                }
            }
        }

        if (isGoodT && isGoodS) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
