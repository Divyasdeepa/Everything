#https://www.facebook.com/permalink.php?story_fbid=107317871142097&id=100055916535575
#Subscribed by Code House
#Hacktoberfest 2020
#C++
#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int i;
	int freq[256] = {0};
	gets(str);
	for(i = 0; str[i] != ‘\0’; i++)
	{
		freq[str[i]]++;
	}
	for(i = 0; i < 256; i++)
	{
		if(freq[i] != 0)
		{
			printf(“%c %d\n”, i, freq[i]);
		}
	}
	return 0;
}
