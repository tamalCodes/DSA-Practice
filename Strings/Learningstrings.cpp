#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string a = "tamal";
    cout << a << endl; //in this way you can input and print a string without spaces

    string str;
    getline(cin, str); //this is how to do stuffs with spaces

    cout << str << endl;

    //concatenate :
    string a = "Tamal";
    string b = " Das";
    string s = a.append(b);
    cout << s << endl;

    //compare:
    string a = "tamal";
    string b = "xyz";
    cout << b.compare(a);

    //erase:
    string c = "Understandable";
    c.erase(2, 3); //start index and number of characters to be deleted.
    cout << c;     //der wil be deleted
    return 0;
}