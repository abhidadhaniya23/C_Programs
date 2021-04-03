// #include <stdio.h>
// #include <string.h>

// int letter_counter(char *string);
// int number_counter(char *string);
// int alphabet_counter(char *string);

// int main(void) {
  
//   char str[1000];
//   printf("Enter your paragraph...\n");
//   gets(str);

//   letter_counter(str);
//   number_counter(str);
//   alphabet_counter(str);

//   return 0;
// }

// int letter_counter(char *string){

//   // char string2[1000];
//   int number_of_spaces=0;
//   for(int i=0;i<=strlen(string);i++){
//     if(string[i]==32){
//       number_of_spaces++;
//     }
//   }
//   printf("Total number of characters : %d\n",strlen(string)-number_of_spaces);
//   printf("Total number of Words : %d\n",number_of_spaces+1);

//   return (strlen(string)-number_of_spaces);
  
// }

// int number_counter(char *string){

//   int number_of_digits=0;
//   for(int i=0;i<=strlen(string);i++){
//     if((string[i]>='0') && (string[i]<='9')){
//       number_of_digits++;
//     }
//   }
//   printf("Total number of digits : %d\n",number_of_digits);

//   return number_of_digits;
  
// }

// int alphabet_counter(char *string){

//   printf("Before call\n");

//   int l=letter_counter(string);
//   int n=number_counter(string);
 
//   int ans=l-n;

//   printf("After call\n");

//   printf("Total alphabet : %d",ans);

//   return 0;

// }



// #include <stdio.h>
// #include <string.h>

// int letter_counter(char *);
// int number_counter(char *);
// int alphabet_counter(char *);

// int main(void) {
  
//   char str[1000];
//   printf("Enter your paragraph...\n");
//   gets(str);
  
//   /*
//   letter_counter(str);
//   number_counter(str);
//   */
//   alphabet_counter(str);

//   return 0;
// }


// int letter_counter(char *string){

//   // char string2[1000];
//   int number_of_spaces=0;
//   for(int i=0;i<=strlen(string);i++){
//     if(string[i]==32){
//       number_of_spaces++;
//     }
//   }
//   printf("Total number of characters : %d\n",strlen(string)-number_of_spaces);
//   printf("Total number of Words : %d\n",number_of_spaces+1);

//   return (strlen(string)-number_of_spaces);
  
// }


// int number_counter(char *string){

//   int number_of_digits=0;
//   for(int i=0;i<=strlen(string);i++){
//     if((string[i]>='0') && (string[i]<='9')){
//       number_of_digits++;
//     }
//   }
//   printf("Total number of digits : %d\n",number_of_digits);

//   return number_of_digits;
  
// }


// int alphabet_counter(char *string){
  
//   /*
//   printf("Before call\n");
//   */

 
//   int ans=letter_counter(string) - number_counter(string);
  
//   /*
//   printf("After call\n");
//   */
//   printf("Total alphabet : %d",ans);

//   return 0;

// }






#include <stdio.h>

int add(int x,int y);
int sub(int x,int y);
int main(){

  int a;
  int b;
  
  printf("enter two numbers:\n");
  
  scanf("%d%d",&a,&b);

  add(a,b);
  sub(a,b);

  return 0;
}

int add(int x, int y){
 int add;
 add=x+y;
 printf("%d\n",add);
 return add;
}

int sub(int x,int y){
  printf("Before Call\n");
  printf("In sub, function is %d\n",add(x,y));
  printf("After Call\n");
  return 0;
}