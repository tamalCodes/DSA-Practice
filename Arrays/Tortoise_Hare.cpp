#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int tortoise = arr[0];
    int hare = arr[0];

    //phase 1 where the tortoise and the hare competes
    //hare moves by 2 steps while tortoise moves by 1
    do
    {
        tortoise = arr[tortoise];
        hare = arr[arr[hare]];
    } while (tortoise != hare);

    tortoise = arr[0];
    
    //phase 2 another chance given
    //both of them moves at the same speed
    while (tortoise != hare)
    {
        tortoise = arr[tortoise];
        hare = arr[hare];
    }

    cout<<hare;

    return 0;
}