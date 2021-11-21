#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string q;
    cin >> q;
    while (t > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (i != 0 && q[i] == 'G')
            {
                if (q[i - 1] == 'B')
                {
                    swap(q[i - 1], q[i]);
                }
            }
        }
        t--;
    }

    cout << q;
    return 0;
}