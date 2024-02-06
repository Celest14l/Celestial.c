#include<stdio.h>

int main(){
    //acc to ascii charac 97 to 122 = a-z
    char ch;
    printf("Enter a chracter :\n");
    scanf("%c", &ch);

    if(ch>=97 && ch<=122){
        printf("IT is lowercase");
    }
    else{
        printf("it is not a lowercase");
    }
    return 0;
}