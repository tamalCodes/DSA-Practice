#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int permutations(string s, int d)
{
    //  length of the string
    int n = s.length();

    // base case
    if (n == 0)
    {
        return 0;
    }

       sort(s.begin(), s.end());

    while (1)
    {

        // converting string to int and checking if multiple
        int result;
        stringstream obj;
        obj << s;
        obj >> result;

        if (result % d == 0)
        {
            cout << result << " ";
            return 1;
        }

        int i = n - 1;
        while (s[i - 1] >= s[i])
        {
            if (--i == 0)
            {
                return 0;
            }
        }

        int j = n - 1;
        while (j > i && s[j] <= s[i - 1])
        {
            j--;
        }

        // swap character at index `i-1` with index `j`
        swap(s[i - 1], s[j]);

        // reverse substring `s[i…n-1]`
        reverse(s.begin() + i, s.end());
    }
}

int main()
{
    int N, d;
    cout << "Enter N and d" << endl;
    cin >> N >> d;

    stringstream ss;
    ss << N;
    string str = ss.str();

    int k = permutations(str, d);
    if (k == 0)
    {
        cout << "-1";
    }
    return 0;
}