#include <iostream>
using namespace std;
main()
{
string name;
float matricMarks;
float intermediateMarks;
float ecatMarks;
float ecat;
float matric;
float intermediate;
float aggregate;

cout << "enter your name: ";
cin >> name;
cout <<" enter your matric marks: ";
cin >> matricMarks;
matric = 0.1 * (matricMarks/1100.0)*100;
cout << "enter your intermediate marks: ";
cin >> intermediateMarks;
intermediate = 0.4 * (intermediateMarks/550.0)*100;
cout << "enter your ecat marks: ";
cin >> ecatMarks; 
ecat = 0.5 * (ecatMarks/400.0)*100;

aggregate = ecat + matric + intermediate ;
cout <<"your aggregate is: " << aggregate;
}