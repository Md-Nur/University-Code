#include <stdio.h>
#include <string.h>

int main(){
    FILE *source, *target;

    char src[100], tar[100], ch;

    printf("Enter the source file name: ");
    gets(src);
    printf("Enter the targeted file name: ");
    gets(tar);

    source = fopen(src, "r");

    if(source == NULL){
        printf("Error in opening source file!");
        return 1;
    }

    target = fopen(tar, "w");

    if(target == NULL){
        printf("Error in opening target file!");
        fclose(source);
        return 1;
    }

    while((ch = fgetc(source)) != EOF){
        fputc(ch, target);
    }

    printf("File copied successfully!");

    fclose(source);
    fclose(target);

    return 0;
}