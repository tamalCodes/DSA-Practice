//the idea is to rev a

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    for (int i = 0; i < s.length()/2; i++)
    {
       swap(s[i],s[s.length()-(i+1)]);
    }
    
    cout<<s;
}