#include <bits/stdc++.h>
using namespace std;

void convertToUpperCase(char ch[],int n){
    int index = 0;
    while(ch[index] != '\0'){
        if(ch[index] >= 'a' && ch[index] <= 'z'){
            ch[index] = ch[index] - 32; // Convert to uppercase
        }
        index++;
    }
}
int main(){
    char ch[100];
    cin.getline(ch, 100); // Read a line of input into the array
    convertToUpperCase(ch, strlen(ch)); // Convert to uppercase
    cout << ch << endl; // Output the modified string
    return 0;
}