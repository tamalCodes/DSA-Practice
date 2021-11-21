#include <bits/stdc++.h>
using namespace std;
int main()
{
    int groups, sum = 0, cabs;
    cin >> groups;

    int arr[groups];
    for (int i = 0; i < groups; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    if (sum < 5)
    {
        cout << "1";
        return 0;
    }
    else
    {
        int t = sum % 4;
        cabs = sum / 4;

        if (t > 0)
        {
            cabs = cabs + 1;
        }
    }
    cout << cabs;
    return 0;
}