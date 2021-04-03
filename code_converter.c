#include <stdio.h>
#include <string.h>

int main()
{
	char alphabets[30] = "abcdefghijklmnopqrstuvqxyz";
	char str[1000];
	printf("Enter your string : ");
	gets(str);
	// printf("%s\n",str);
	// for (int i = 0; i <= strlen(str); i++) {
	// 	if ((str[i] >= 'a' && str[i] <= 'z')||(str[i] >= 'A' && str[i] <= 'Z')) {
	// 		puts(str);
	// 		// printf("%s\n",str);
	// 	}
	// }
	for (int i = 0; i <= strlen(str); i++) {
		str[i] = alphabets[i];
	}
	puts(alphabets);
	puts(str);
	printf("Ok done\n");
	return 0;
}