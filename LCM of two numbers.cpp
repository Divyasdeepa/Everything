#https://www.facebook.com/permalink.php?story_fbid=107317871142097&id=100055916535575
#Subscribed by Code House
#Hacktoberfest 2020
#C++
#include <iostream>
using namespace std;

int main()
{
int a, b, lcm;
cout << “\nEnter two numbers: “;
cin >> a >> b;

lcm = (a > b) ? a : b;

while(1)
{
if( lcm % a == 0 && lcm % b == 0 )
{
cout << “\nLCM of ” << a << ” and ” << b << ” is “<< lcm << endl;
break;
}
++lcm;
}
return 0;
}
