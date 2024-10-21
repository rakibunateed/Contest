#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;
        int reference[5][3];
        for (int i = 0; i < 5; i++) {
            cin >> reference[i][0] >> reference[i][1] >> reference[i][2];
        }
        bool consistent = true;
        for (int day = 1; day < d; day++) {
            for (int i = 0; i < 5; i++) {
                int E, S, R;
                cin >> E >> S >> R;
                if (E != reference[i][0] || S != reference[i][1] || R != reference[i][2]) {
                    consistent = false;
                }
            }
        }
        if (consistent)
            cout << "Consistent" << endl;
        else
            cout << "Inconsistent" << endl;
    }
    return 0;
}
