#include <bits/stdc++.h>
using namespace std;
int main(){
    char a[4] = "abc";
    cout<<a[1]<<endl; // This will cause an out-of-bounds access

    return 0;
}