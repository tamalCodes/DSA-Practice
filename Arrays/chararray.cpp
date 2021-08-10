//this is a aelf made tutorial for character array.
//this is a program to find out the largest word in an array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    //  we generally take char arr[n+1] because of the fact that at the end of an character array there is a
    // null character;
    char arr[100];
    cin >> arr;
    int curlen = 0, maxlen = 0, i = 0, start = 0, end = 0;
    int mstart =0,mend = 0;
    while (1)
    {

        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (curlen > maxlen)
            {
                maxlen = curlen;
                mstart = start;
                mend = end;
            }
            curlen = 0;
            start = i;
            end = i;
        }
        else
        {
            curlen++;
            end++;
        }

        if (arr[i] == '\0')
            break;

        i++;
    }
    cout << maxlen<< endl;
    for (int i = mstart; i <=mend; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}