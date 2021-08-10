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

    //in addition to all these we have size, find, length,
    string demo = "Hello everyone i am Tamal"

    s.length();
    s.size();
    s.find("am");
    s.insert(2,"lol"); 
    s.substr(0,3) //start from 0 and extract 3 characters.
    
    string s1 = "99";
    int x=stoi(s1);  //converts string to int
    string s2 = to_string(x);

    
    
    //to sort a string:
    int sortable = "edcba";
    sort(sortable.begin(), sortable.end());   //This will sort everything from begin to end and give abcde
    return 0;
}