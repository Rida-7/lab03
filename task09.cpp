#include <iostream>
using namespace std;
main()
{
int num01;
int num02;
int num03;
int num04;
int num05;
int num06;
int num07;
int num08;
int num09;
int num10;
int add;
int multiply;
int divide;
int subtract;
int result;
cout<<" enter 1st number: ";
cin >> num01;
cout <<"enter 2nd number: ";
cin >> num02;
cout <<"enter 3rd number: ";
cin >> num03;
cout<<"enter 4th number: ";
cin >> num04;
cout<<"enter 5th number: ";
cin >> num05;
cout<<"enter 6th number: ";
cin >> num06;
cout<<"enter 7th number: ";
cin >> num07;
cout<<"enter 8th number: ";
cin >> num08;
cout<<"enter 9th number: ";
cin >> num09;
cout<<"enter 10th number: ";
cin >> num10;
add = num03 + num05 + num09;
multiply = num07*num10*num06;
divide= num08/num04;
subtract = num02-num01;
result = add + multiply + divide + subtract;

cout <<"the result is: " << result;
}