//Printing Right angle triangle


#include<stdio.h>
int main(){
    int star=4;

    for( int i=0; i < star; i++){

        for(int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
