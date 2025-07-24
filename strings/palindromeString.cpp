#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(char str[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false; // Not a palindrome
        }
        start++;
        end--;
    }
    return true; // Is a palindrome
}
int main() {
    char str[100];
    cin.getline(str, 100); // Read a line of input into the array
    int n = strlen(str); // Get the length of the string

    if (isPalindrome(str, n)) {
        cout << "The string is a palindrome." << endl; // Output if it's a palindrome
    } else {
        cout << "The string is not a palindrome." << endl; // Output if it's not a palindrome
    }

    return 0;
}