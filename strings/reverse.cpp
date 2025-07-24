#include <bits/stdc++.h>
using namespace std;

int main(){
    char a[100];
    cin.getline(a, 100); // Read a line of input into the array
    int n = strlen(a); // Get the length of the string
    reverse(a, a + n); // Reverse the string using algorithm's reverse function
    cout << a << endl; // Output the reversed string
}