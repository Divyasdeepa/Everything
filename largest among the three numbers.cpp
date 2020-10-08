#https://www.facebook.com/permalink.php?story_fbid=107317871142097&id=100055916535575
#Subscribed by Code House
#Hacktoberfest 2020
#C++
#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter three numbers : ");
scanf("%d %d %d", &a,&b,&c);
int max = 0;
if(a > b && a > c)
printf("\nThe largest among the three numbers is %d",a);
else if(b > a && b > c)
printf("\nThe largest among the three numbers is %d",b);
else
printf("\nThe largest among the three numbers is %d",c);
printf("\n");
return 0;
}
