#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// int main()
// {
	// char str[20];
	// int strlength;
	// printf("Enter your string : ");
	// fflush(stdin);
	// scanf("%s",str)
	// while(str[]!='\0'){
	// 	strlength++;
	// }
	// printf("The length of your string is : %d\n",strlength);
	// return 0;

// 	char s1[100] = "Abhi";
// 	char s2[100] = "Dadhaniya";

// 	int len1 = 0;
// 	int len2 = 0;

// 	while (s1[len1] != '\0') {
// 		len1++;
// 	}
// 	while (s2[len2] != '\0') {
// 		len2++;
// 	}

// 	for(int i=0;i<len1+len2;i++){
// 		// printf("%c",s1[i]);
// 	}
// 	for(int i=len1;i<len2;i++){
// 		s1[i]=s2[i+1];
// 	}
// 		printf("%s",s1);

// 	// printf("Length of 1st string : %d\n", len1);
// 	// printf("Length of 2st string : %d\n", len2);

// }

	int main()
{
   char str1[50], str2[50], i, j;
   printf("\nEnter first string: ");
   scanf("%s",str1);
   printf("\nEnter second string: ");
   scanf("%s",str2);
   /* This loop is to store the length of str1 in i
    * It just counts the number of characters in str1
    * You can also use strlen instead of this.
    */
   for(i=0; str1[i]!='\0'; ++i); 
 
   /* This loop would concatenate the string str2 at
    * the end of str1
    */
   for(j=0; str2[j]!='\0'; ++j, ++i)
   {
      str1[i]=str2[j];
   }
   // \0 represents end of string
   str1[i]='\0';
   printf("\nOutput: %s",str1);
   
   return 0;
}