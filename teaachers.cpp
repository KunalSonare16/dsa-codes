#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 5> arr;
    arr.fill(3);  // Fills the entire array with 3

    for (int i ;i<5;i++)
        cout << arr[i]<< " ";  // Output: 3 3 3 3 3
    
    return 0;
}
