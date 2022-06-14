// String Questions.

// User input: www.google.com
// Output: google

// i/p: www.gmail.com
// o/p: gmail
// Print Domain names after taking website name from user.

#include<iostream>
using namespace std;

int main ()
{
string s;
int i, k;

cout<<"Enter a Website name:\t";
cin>>s;

cout<<"\n\nWebsite is: "<<s;

cout<<"\n\nRequired Domain Name is: ";
for (i = 4; s[i] != '.'; i++)
cout<<s[i];
}


