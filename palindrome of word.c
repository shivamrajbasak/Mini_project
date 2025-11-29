#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
 printf("enter the word");
 scanf("%s",word);
 int len = strlen(word);
 int ispalidrome = 1;
 for (int i = 0; i < len/2; i++)
 {
    if (word[i] != word[len-i-1])
    {
        ispalidrome=0;
        break;
    }
 }
 if (ispalidrome)
 {
    printf("perfct secret number \n");
 }
 else
     printf("not secret word \n");
 
 
return 0;
}
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char word[100];
//     printf("enter the word");
//     scanf("%S",word);
//     if (strcmp(word , ))
//     {
//         /* code */
//     }
    
    
// return 0;
// }