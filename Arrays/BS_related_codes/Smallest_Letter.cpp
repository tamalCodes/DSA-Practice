//^ https://leetcode.com/problems/find-smallest-letter-greater-than-target/

// * The logic is same as that of the ceiling dot CPP program the only difference that we have is we are actually using a character array and previously we were using the number array.

//* Also in this case there won't be any condition where the target is equals to that of mid value

//* Also this time there is going to be little wrap that means if the last element in the vector is actually Greater than that of target then we return the first element of the vector..For this specif reason we use modulus in return

#include <bits/stdc++.h>
using namespace std;

char nextGreatestLetter(vector<char> &letters, char target)
{
    int start = 0;
    int end = letters.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (letters[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }

    return letters[start % letters.size()];
}

int main()
{
    vector<char> letters = {'c', 'f', 'j'};
    char target = 'd';
    char ans = nextGreatestLetter(letters, target);
    cout << ans;
    // Auto call by leetcode
}