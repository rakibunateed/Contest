#include <iostream>
using namespace std;

int main() {
    int t;  // number of test cases
    cin >> t;
    
    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (k == 1) {
            // If k == 1, the number of leaves in year n is exactly n
            if (n % 2 == 0) {
                cout << "YES" << endl;  // Even number of leaves
            } else {
                cout << "NO" << endl;   // Odd number of leaves
            }
        } else {
            // For k > 1, check the number of terms contributing from n-k+1 to n
            long long start = n - k + 1;
            if ((start % 2) == (n % 2)) {
                // If both the start and end of the sequence are either both odd or both even,
                // the total number of odd numbers in the sequence will be even.
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
