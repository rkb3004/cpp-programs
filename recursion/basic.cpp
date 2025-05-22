#include <iostream>
using namespace std;

void print(int n) {
   cout<<1<<endl;
    print(n);
}

int main() {
    int n ;  
    print(n);
    
    return 0;
}

// recursion me ye endless loop ki trh kaam kr rha hai and segmentation fault de rha hai
// jo void wala fn hai wo stack me store hoke reh jaa rha hai isiliye stackoverflow ho raha hai and segmentation fault de rha hai