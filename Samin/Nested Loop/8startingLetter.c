/*
Write a C program which can input a senctence and display the first letter of each words.
Sample Input:
This is Bangladesh
Sample Output:
T 
i
B
*/
#include <stdio.h>

void main(){
    char str[100];
    int i;
    printf("Enter a sentence: ");
    gets(str);
    printf("First letter of each word: \n");
    printf("%c\n", str[0]);
    for(i=0; str[i]!='\0'; i++){
        if(str[i]==' '){
            printf("%c\n", str[i+1]);
        }
    }
}