#include <iostream>
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

    int ck = -1, index;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] >=arr[i])
        {
            index = i;
            ck = 0;
            break;
        }
    }




    if (ck == -1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
        }
    }
    else
    {
        if (arr[index - 1] < arr[index + 1])
        {
            arr[index] = 0;
        }

        if (arr[index - 1] > arr[index + 1])
        {
            arr[index - 1] = 0;
        }

       
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                if(arr[i-1]>arr[i+1])
                {
                    cout<<"False";
                    return 0;
                }
            }

            if (arr[i - 1] >= arr[i])
            {
                cout << "False";
                return 0;
            }

            
        }
        cout << "True";
    }

    return 0;
}