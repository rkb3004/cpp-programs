#include <bits/stdc++.h>
using namespace std;
void replaceAtWithSpace(char ch[], int n) {
    for (int i = 0; i < n; i++) {
        if (ch[i] == '@') {
            ch[i] = ' '; // Replace '@' with space
        }
    }
}
int main() {
    char ch[100];
    cin.getline(ch, 100); // Read a line of input into the array
    int n = strlen(ch); // Get the length of the string
    replaceAtWithSpace(ch, n); // Replace '@' with space
    cout << ch << endl; // Output the modified string
    return 0;
}