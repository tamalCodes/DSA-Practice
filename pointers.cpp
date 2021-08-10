//This is a simple tutorial for the concept of pointers.

#include <bits/stdc++.h>
using namespace std;
int main()
{
 int a = 20;
 int b = 30;

 int *aptr = &a;
 cout<<aptr;  //this prints the memory location of the memory

 cout<<*aptr;  //this will print the value of a. dereferencing.
 return 0;
}