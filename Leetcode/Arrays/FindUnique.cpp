// here there can be an array and inside that array there can be an unique element.
// example  = {2 3 1 6 3 6 2} here 1 is the unique element.

// brute force 1 --> check all elements by maintaining a count pointer
// brute force 2 --> have 2 pointers one in front and one in back.
// optimized --> do XOR because 2 XOR 2 kete jaay. Jeta unique sheta pore thaakbe last e.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5, arr[] = {2, 3, 1, 6, 3, 6, 2};
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = (ans ^ arr[i]); // last e ans er value will be unique.
        cout << (2 ^ 3 ^ 1 ^ 6 ^ 3 ^ 6 ^ 2);
    }

    cout << "Unique number : " << ans << endl;

    return 0;
}