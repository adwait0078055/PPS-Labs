#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char str1[50], str2[50];
   int j;
   printf("Enter Name of First Machine Model:\n");
   scanf("%s", str1);
   printf("Enter Name of Second Machine Model:\n");
   scanf("%s", str2);
   j = strcmp(str1, str2);
   if (j==0) {
        printf("Both the Machine Models Are Same. \n\n");
   }
   else{
        printf("Both the Machine Models Are Different\n\n");
   }
  return 0;
}
