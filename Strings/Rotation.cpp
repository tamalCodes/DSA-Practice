//The idea is to check if a string is a rotation of the other
//string 1 = HELLO, string 2 = ELLOH, the answer will be YES



#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str,str2;
    getline(cin,str);
    getline(cin,str2);

    if(str.length()!=str2.length())
    {
        cout<<"NO";
        return 0;
    }

    string temp = str+str;
    if(temp.find(str2))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}