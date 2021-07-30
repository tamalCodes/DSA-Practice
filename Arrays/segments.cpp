// Given an array arr[] and size of array is n and one another key , and give you a segment size elements.
//The task is to find that the key is  present in every segment of size k in arr[].

//Time Complexity: O(n)

//Logic: Total number of segments means total number of keys. So if there are 4 segs, then 4keys.
// so if size % segment size = 0 then array is divided equally else not
// if total element is 19 and segment size is 5 then total segemnent should be 3 and 4 remaning elements. (4 keys)

//Link to the question: https://www.geeksforgeeks.org/check-if-a-key-is-present-in-every-segment-of-size-k-in-an-array/




#include <iostream>
using namespace std;

void chek(int arr[], int n, int key, int elements)
{
    int a = 0, count = 0;
    if (n % elements == 0)
    {
        a = n / elements;
    }
    else
    {
        a = (n / elements) + 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            count++;
    }
    if (count == a)
        cout << "Yes";
    else
        cout << "no";
}

int main()
{
    int n, key, elements;
    cout << "Enter the size\n";
    cin >> n;
    int arr[n];
    cout << "Enter the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the key and elements in segments\n";
    cin >> key >> elements;
    chek(arr, n, key, elements);
    return 0;
}