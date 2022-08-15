// We need to allocate books to the students such that we can find out the min amongst the max that are allocated.
// here we

#include <bits/stdc++.h>
using namespace std;

bool allocationIsPossible(int arr[], int n, int barrier, int students)
{

    int allocatedStudents = 1, pages = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > barrier)
            return false;

        if (pages + arr[i] > barrier)
        {
            allocatedStudents += 1;
            pages = arr[i];
        }
        else
        {
            pages += arr[i];
        }
    }

    if (allocatedStudents > students)
        return false;
    else
        return true;
}

void BinarySearch(int arr[], int n, int students)
{

    int low = 0, high = 0, res = 0;

    // high will be the sum of array
    for (int i = 0; i < n; i++)
    {
        high = high + arr[i];
    }

    // binary search to find out the best barrier
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (allocationIsPossible(arr, n, mid, students))
        {
            res = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << res;
}
int main()
{
    int arr[] = {12,
                 34,
                 67,
                 90};
    int students = 2, n = 4;

    BinarySearch(arr, n, students);

    return 0;
}