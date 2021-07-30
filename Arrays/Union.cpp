// Given two arrays a[] and b[] of size n and m respectively.The task is to find union between these two arrays.

// Union of the two arrays can be defined as the set containing distinct elements from both the arrays.
// If there are repetitions, then only one occurrence of element should be printed in union.

//Time : O(n)

// Input:
// 5 3
// 1 2 2 3 4 5
// 1 2 3
// Output:
// 5

//Because the total  elements here are: 1 2 3 4 5



#include <bits/stdc++.h>
using namespace std;

int uoa(int a[], int b[], int n, int m)
{
    set<int> s;
    set<int>::iterator itr;

    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }

    for (int i = 0; i < m; i++)
    {
        s.insert(b[i]);
    }

    return s.size();
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    cout << uoa(a, b, n, m);

    return 0;
}