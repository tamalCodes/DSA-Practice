// The link to the question: https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff08/0000000000387171

#include <iostream>
using namespace std;
int main()
{
    int t, n, i, j, rbd, y = 0, a = 1;
    cin >> t;
    while (a <= t)
    {
        cin >> n;
        int arr[n];

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n == 1)  //if number of days is just 1
        {
            cout << "1" << endl;
        }
        else
        {
            rbd = arr[0];

            if (arr[0] > arr[1]) //first element
            {
                rbd = arr[0];
                y = y + 1;
            }

            for (i = 1; i < n - 1; i++)   //all the rest elements
            {
                if ((arr[i] > rbd) && (arr[i] > arr[i + 1]))
                {
                    rbd = arr[i];
                    y = y + 1;
                }
            }

            if (arr[n - 1] > rbd) //last element
            {
                y = y + 1;
            }

            cout << "Case #" << a << ": " << y << endl;
            a++;
            y = 0;
        }
    }

    return 0;
}