#include <iostream>
#include <algorithm>
using namespace std;

bool is_valid_seating(int a[], int n) {
    int min_seat = a[0];  // Track the smallest occupied seat
    int max_seat = a[0];  // Track the largest occupied seat

    for (int i = 1; i < n; ++i) {
        min_seat = min(min_seat, a[i]);  // Update the smallest seat
        max_seat = max(max_seat, a[i]);  // Update the largest seat

        // Check if the current range of occupied seats is continuous
        if (max_seat - min_seat + 1 != i + 1) {
            return false;  // There is a gap, so the recommendation was not followed
        }
    }
    return true;  // All seats are connected as required
}

int main() {
    int t;
    cin >> t;  // Read the number of test cases

    while (t--) {
        int n;
        cin >> n;
        int a[n];  // Declare an array to hold seat numbers

        for (int i = 0; i < n; ++i) {
            cin >> a[i];  // Read the seat numbers
        }

        if (is_valid_seating(a, n)) {
            cout << "YES" << endl;  // Output YES if all passengers followed the rules
        } else {
            cout << "NO" << endl;   // Output NO if the rules were broken
        }
    }

    return 0;
}