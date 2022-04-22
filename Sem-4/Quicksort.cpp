//* elements smaller than pivot are on the left side of the pivot
//* elements larger than pivot are on the right side of the pivot
//* after every pass you are putting the pivot in its correct position
//* and then you are recursively calling the function on the left and right side of the pivot

//* Time Complexity: O(n^2)
//* Space Complexity: O(1)
//* illegal element is a element who is in the wrong position

#include <bits/stdc++.h>
using namespace std;

// pivot element laagbe so just taake first element of array
// ei partition fn ta basically pivot taake tar thik jaaygay boshate kaaje laaage

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int lb = s;

    // keep traversing until and unless you find illegal element
    // remember that alwway s should be less than pivot, e should be greater
    // jodi na hoy tokhone s taa ke aatke rekhe e taa ke traverse kore arekta illiegal element ber koro
    // then swap s and e

    while (s < e)
    {
        while (arr[s] <= pivot)
        {
            s++;
        }

        while (arr[e] > pivot)
        {
            e--;
        }

        // swap the illegal start and end
        if (s < e)
        {
            swap(arr[s], arr[e]);
        }
    }

    // finally swap the pivot with the end element , jaar fole pivot ta thik jaygay chole ashbe nijer
    swap(arr[lb], arr[e]);
    return e;
}

// amra ekhane partition ta prothome ber kore rekeechi and then partition diye array taake bhangchi and recursively call korei jachhi jotokhon na array ta chotto na hoy

void quickSort(int arr[], int s, int e)
{
    if (s < e)
    {
        int q = partition(arr, s, e);
        quickSort(arr, s, q - 1);
        quickSort(arr, q + 1, e);
    }
}
// Driver program to test above functions
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
