#https://www.facebook.com/permalink.php?story_fbid=107317871142097&id=100055916535575
#Subscribed by Code House
#Hacktoberfest 2020
#C++
#include<iostream>
using namespace std;
int main()
{
int sum = 0, n;
int a = 0;
int b = 1;
cout << "Enter the nth value: ";
cin >> n;
cout << "Fibonacci series: ";
while(sum <= n)
{
cout << sum << " ";
a = b;  // swap elements
b = sum;
sum = a + b;  // next term is the sum of the last two terms 
}
return 0;
}
