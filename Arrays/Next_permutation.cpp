#include <bits/stdc++.h>
using namespace std;

void nextp(int arr[], int n)
{
    if (n == 1)
        return;

    int ck = -1, peak, index, index2, sw;

    for (int i = 1; i <n; i++) //check desecnding
    {
        if (arr[i] > arr[i - 1])
           {
               ck=i;
           }
    }
    cout<<ck<<endl;
    if (ck == -1)
    {
        for (int i = 0; i < n / 2; i++)
        {
            swap(arr[i], arr[n - (i + 1)]);
        }
    }
    else
    {
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] < arr[i + 1])
            {
                peak = arr[i];
                index = i;
                break;
            }
        }
        cout << "Peak is: " << peak << endl;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] > peak)
            {
                sw = arr[i];
                index2 = i;
                break;
            }
        }

        swap(arr[index], arr[index2]);
        index = index + 1;
        sort(arr + index, arr + n);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;

    cout << "ENTER N";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Calling function" << endl;
    nextp(arr, n);

    return 0;
}