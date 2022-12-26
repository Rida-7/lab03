#include <iostream>
using namespace std;
main()
{
int megabytes;
int inBits;
int kilobytes;
int bytes;
cout <<"enter megabytes: ";
cin >> megabytes;
kilobytes = megabytes*1024;
bytes = kilobytes*1024;
inBits = bytes*8;



cout<<"in bits are: " << inBits; 
}