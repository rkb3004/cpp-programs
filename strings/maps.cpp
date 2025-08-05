#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0;

    // Input until newline
    while (cin >> arr[n]) {
        n++;
        if (cin.peek() == '\n') break;
    }

    for (int i = 0; i < n; ) {
        int count = 0;

        // Count how many times arr[i] repeats consecutively
        for (int j = i; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            } else {
                break;
            }
        }

        // Print result
        cout << count << " " << arr[i] << " ";
        i += count; // Move to next group
    }

    return 0;
}
